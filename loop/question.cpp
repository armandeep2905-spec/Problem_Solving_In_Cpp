//find sum 1-2+3-4.......



#include<iostream>
using namespace std;
int main(){
    int n; 
    int sum=0;
    cout<<"enter the required numbers";
    cin>>n;
//     for(int i=1;i<n;i++){
// if(i%2==0){sum=sum+i;}
// else{sum=sum-i;};
// cout<<"step"<<i<<" "<<"->"<<sum<<endl;
//  }
//  cout<<"required answer is"<<sum;

// better and efficient method
if(n%2==0){
    cout<<"required sum is equal to "<<(n/2)*(-1);
}
else{cout<<(-n/2)+n;}
  return 0;
}