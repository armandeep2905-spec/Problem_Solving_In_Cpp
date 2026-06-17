#include<iostream>
#include<queue>
using namespace std;

void display(int arr[],int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
void heapify(int i,int arr[],int n)
{
 
    while (true)
    {
        int left = 2 * i;
        int right = 2 * i + 1;

        // No children
        if (left > n)
            break;


        // Pick smaller child
        int smallerChild = left;

        if ( right<=n &&arr[right] < arr[left])
            smallerChild = right;

        // If parent already smaller → stop
        if (arr[i] <= arr[smallerChild])
            break;

        // Swap with smaller child
        swap(arr[i], arr[smallerChild]);

        // Move downward
        i = smallerChild;
    }
}


                    
   


int main(){
    int arr[50],n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
for(int i=n/2;i>=1;i--){
    heapify(i,arr,n);
}
display(arr,n);
}


//TRAUMATIZED...
//ded.
