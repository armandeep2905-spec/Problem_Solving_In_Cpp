#include <iostream>
using namespace std;
int repeated(int arr[], int n)
{
    int count = 0; 
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i + 1] == arr[i])
        {
            count++;
        }
        
    }
    return count;
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int duplicate(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}
int main()
{
    int n;
    cout << "enter the number of elements";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "entered array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    bubblesort(arr, n);
    cout << "sorted array " << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " " << endl;
    }
    int size = duplicate(arr, n);
    cout << "required array" << endl;
    for (int a = 0; a < size; a++)
    {
        cout << arr[a] << " " << endl;
    }

    int unique = repeated(arr, n);
    cout << "no. of unique elements =" << n - unique;
    return 0;
}