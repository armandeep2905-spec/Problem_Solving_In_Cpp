#include <iostream>
using namespace std;
int main()
{
    int mn=INT_MIN;
    int mx=INT_MAX;
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if(arr[i]>mn){
            mn=arr[i];
            if(arr[i]<mx){
            mx=arr[i];
        }}}
        cout<<mn<<" "<<mx;
    
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    }