#include <iostream>
using namespace std;

// Function to create sparse representation from normal matrix
int createSparse(int mat[10][10], int r, int c, int sp[100][3]) {
    int k = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] != 0) {
                sp[k][0] = i;
                sp[k][1] = j;
                sp[k][2] = mat[i][j];
                k++;
            }
        }
    }
    return k; // number of non-zero elements
}

// Function to transpose sparse matrix
void transpose(int sp[100][3], int res[100][3], int n) {
    for (int i = 0; i < n; i++) {
        res[i][0] = sp[i][1];
        res[i][1] = sp[i][0];
        res[i][2] = sp[i][2];
    }
}

// Function to add two sparse matrices
int addSparse(int A[100][3], int n1, int B[100][3], int n2, int C[100][3]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (A[i][0] == B[j][0] && A[i][1] == B[j][1]) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2] + B[j][2];
            i++; j++; k++;
        } 
        else if ((A[i][0] < B[j][0]) || 
                 (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        } 
        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++; k++;
        }
    }
    while (i < n1) {
        C[k][0] = A[i][0]; C[k][1] = A[i][1]; C[k][2] = A[i][2]; i++; k++;
    }
    while (j < n2) {
        C[k][0] = B[j][0]; C[k][1] = B[j][1]; C[k][2] = B[j][2]; j++; k++;
    }
    return k;
}

// Function to multiply two sparse matrices
int multiplySparse(int A[100][3], int n1, int r1, int c1,
                   int B[100][3], int n2, int r2, int c2,
                   int C[100][3]) {
    if (c1 != r2) {
        cout << "Multiplication not possible!\n";
        return 0;
    }
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i][1] == B[j][0]) {
                // Check if entry already exists in result
                int found = 0;
                for (int x = 0; x < k; x++) {
                    if (C[x][0] == A[i][0] && C[x][1] == B[j][1]) {
                        C[x][2] += A[i][2] * B[j][2];
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    C[k][0] = A[i][0];
                    C[k][1] = B[j][1];
                    C[k][2] = A[i][2] * B[j][2];
                    k++;
                }
            }
        }
    }
    return k;
}

// Function to print sparse matrix
void printSparse(int sp[100][3], int n) {
    cout << "Row Col Val\n";
    for (int i = 0; i < n; i++) {
        cout << sp[i][0] << "   " << sp[i][1] << "   " << sp[i][2] << "\n";
    }
    cout << endl;
}

int main() {
    int A[10][10] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    int B[10][10] = {
        {0, 0, 0, 0, 5},
        {0, 0, 2, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 6, 0, 0}
    };

    int spA[100][3], spB[100][3], spC[100][3], spT[100][3];
    int n1, n2, n3, n4;

    // Create sparse representations
    n1 = createSparse(A, 4, 5, spA);
    n2 = createSparse(B, 4, 5, spB);

    cout << "Sparse Matrix A:\n"; printSparse(spA, n1);
    cout << "Sparse Matrix B:\n"; printSparse(spB, n2);

    // Transpose
    transpose(spA, spT, n1);
    cout << "Transpose of A:\n"; printSparse(spT, n1);

    // Addition
    n3 = addSparse(spA, n1, spB, n2, spC);
    cout << "A + B:\n"; printSparse(spC, n3);

    // Multiplication
    n4 = multiplySparse(spA, n1, 4, 5, spB, n2, 4, 5, spC);
    cout << "A * B:\n"; printSparse(spC, n4);

    return 0;
}
