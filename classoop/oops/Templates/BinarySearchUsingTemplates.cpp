#include<iostream>
using namespace std;
template<typename T>
int  look(T arr[],T target,int low,int high){
    if(low>high){
        cout<<"not found ";
        return -1;
    }
    else{
    int mid=(low+high)/2;
    if(target==arr[mid]){
        cout<<"required index is "<<mid;
        return mid;}
    if(target<arr[mid]){
       return  look( arr,target,low,mid-1);

    }
    else {
      return  look(arr,target,mid+1,high);
    };
   return mid; }
};
int main(){int n,target;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter "<<n<<" values ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"enter the targeted value "<<endl;
cin>>target;
look(arr,target,0,n);

}
