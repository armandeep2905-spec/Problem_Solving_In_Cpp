#include<iostream>
using namespace std;

class Matrix {
public:
    int a[2][2];

    void input(){
        cout << "Enter 4 numbers: ";
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    void show(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix x, Matrix y);
};

Matrix operator*(Matrix x, Matrix y){
    Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.a[i][j] = 0;
            for(int k=0;k<2;k++)
                temp.a[i][j] += x.a[i][k] * y.a[k][j];
        }
    }
    return temp;
}

int main(){
    Matrix m1, m2, m3;

    m1.input();
    m2.input();

    m3 = m1 * m2;
    m3.show();
}
