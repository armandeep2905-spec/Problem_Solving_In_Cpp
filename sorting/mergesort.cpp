#include<iostream>
#include<vector>
using namespace std;
void mymerge(int arr[],int mid,int st, int end);
void mergesort(int arr[],int st,int end){
    if(st<end){
    int mid=(st+end)/2;
    mergesort(arr,st,mid);
     mergesort(arr,mid+1,end);
    mymerge(arr,mid,st,end);
    
    }

}
    

void mymerge(int arr[],int mid,int st, int end){
vector<int> v;
int i=st;
int j=mid+1;
while(i<mid && j<end){
    if(arr[i]<arr[j]){
        v.push_back(arr[i]);
        i++;
    }
    if(arr[i]>arr[j]){
        v.push_back(arr[j]);
        j++;
    }

}

//for remaining right values

while(i<mid){
v.push_back(arr[i]);
i++;}
while(j<end){
    v.push_back(arr[j]);
    j++;

    for(int i=0;i<end;i++){
        swap(arr[st+1],v[i]);
    }
}
}
int main(){
    int arr[100];
    int size;
    cout<<"enter size of your array";
    cin>>size;
    cout<<"enter your array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,size-1);
 for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}