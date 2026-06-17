#include <iostream>
using namespace std;
int main()
{
    int n=8;
    int arr[8] = {1, 2, 3, 4, 6, 7, 8};
    int sum = 0;
    int expected=n*(n+1)/2;

    for (int i = 0; i < 8; i++)
    {

        sum += arr[i];
    }
    if (sum != expected)
    {
        cout << "missing no. is" << expected - sum;
    }
    return 0;
}