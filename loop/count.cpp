#include <iostream>
using namespace std;
int main()
{
   long int n, count = 0;
 long int sum = 0;
   int i=1;
    cout << "enter your number" << endl;
    cin >> n;
    while (n>0)
    {
        int a = n % 10;
        
        count++;
        sum = sum + a;
       cout<<"step "<<"->"<<i<< " "<<n<<endl;
       i++;n = n / 10;
    }

    cout << "no. of digits " << count<<endl;

    cout << "sum of the digits " << sum;
    return 0;
}