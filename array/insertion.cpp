#include <iostream>
using namespace std;
void insert(int arr[],int value,int pos,int &n){
    for(int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;

}

int main()
{
    int arr[100];
 int n,pos,value;
    cout << "enter the number of elements";
    cin >> n;
    cout<<"enter the index";
    cin>>pos;
    cout<<"what to enter";
    cin>>value;
    
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insert(arr,value,pos,n);

    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
}
    
    