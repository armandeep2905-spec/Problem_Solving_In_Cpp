#include <iostream>
using namespace std;
void insert(int arr[],int pos,int &n){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }

    n--;

}

int main()
{
    
 int n,pos;
    cout << "enter the number of elements";
    cin >> n;
    cout<<"enter the index";
    cin>>pos;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insert(arr,pos,n);

    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
}
    
    