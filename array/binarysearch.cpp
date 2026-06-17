#include <iostream>
using namespace std;

void binarysearch(int arr[], int h, int l, int k)
{
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == k)
        {
            cout << "no.found at" << m;
            return;
        }

        if (arr[m] < k)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
};

int main()
{
    int n, key;
    cout << "enter the number of elements";
    cin >> n;
    int arr[n];
    cout << "req no.";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int h, l, m;
    h = n - 1;
    l = 0;

    binarysearch(arr, h, l, key);
}