#include <iostream>
using namespace std;
int main()
{
   long int n;
   long int rev=0;
   int i=1;
   int dig;
    cout << "enter your number" << endl;
    cin >> n;
    while (n>0)
    {
      rev=rev*10;
      long int last=n%10;
  
       rev=rev+last;
       n=n/10;
       cout<<"step "<<i<<"->"<<" "<<rev<<endl;
      i++;

   

    }
    cout<<"reverse of number is "<<rev;
    return 0;
}