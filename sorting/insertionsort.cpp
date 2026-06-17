#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    int j, temp;
    for (int i = 1; i <= n-1; i++)
    {

        temp = arr[i];
        j = i - 1;
        while (arr[j] < temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cout << "no. of elements in array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}