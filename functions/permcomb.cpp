#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    cin >> r;
    cin >> n;
    fact(n);

    cout << "combination is" << (fact(n)) / (fact(r) * fact(n - r)) << endl;
    cout << "permutation is" << (fact(n)) / (fact(n - r));
    return 0;
}