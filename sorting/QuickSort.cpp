#include <iostream>
using namespace std;
void quicksort(int arr[], int st, int end)
{
    if (st >= end)
        return;

    int pivotidx = MYPART(arr, st, end);
    quicksort(arr, st, pivotidx - 1);
    quicksort(arr, pivotidx + 1, end);
}

int MYPART(int arr[], int st, int end)
{

    int index = st - 1;
    int pivot = arr[end];
    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {

            swap(arr[j], arr[++index]);
        }
    }
    swap(arr[end], arr[++index]);
    return index;
}
int main()
{
    int arr[6] = {10, 89, 65, 3, 4, 6};
    quicksort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}