#include<iostream>
using namespace std;
int main()
{int n; int fact=1;
    cout<<"enter the required number";
    cin>>n;
  if(n>0){ for(int i=1;i<=n;i++){
fact=fact*i;
cout<<"step"<<i<<"->"<<fact<<endl;
    }
    cout<<"required answer "<<fact;}
    return 0;
}
