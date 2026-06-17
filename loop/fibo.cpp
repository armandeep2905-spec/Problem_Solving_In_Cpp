//1+1+2+3+5+8........
#include<iostream>
using namespace std;
int main()
{int n; int fibo1,fibo2;
    fibo1=0;
    fibo2=1;
    int realfibo;
  cout<<"enter the required number ";
    cin>>n;
int sum=0;int i;
    for( i=1;i<=n;i++){
realfibo=fibo1+fibo2;

fibo1=fibo2;
fibo2=realfibo;


sum+=fibo2;
if(i==1){cout<<"->"<<"1"<<endl;}

cout<<"->"<<realfibo<<" "<<endl;
    }
    cout<<"sum of the digits is equal to "<<sum;
}
