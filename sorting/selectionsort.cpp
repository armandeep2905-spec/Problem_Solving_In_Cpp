#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
   for(int i=0;i<n-1;i++){
int si=i;
for(int j=i+1;j<n;j++){ 
    if(arr[j]>arr[si])
{
    si=j;
}}
swap(arr[si],arr[i]);
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

    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}