#include <iostream>
#include <vector>
#include <algorithm>  // for sort, count
#include <numeric>    // for accumulate

using namespace std;

int main() {
    vector<int> vec = {5, 1, 4, 2, 3};

    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Counting occurrences of a value (3)
    int count3 = count(vec.begin(), vec.end(), 3);

    // Calculating sum of all elements
    int sum = accumulate(vec.begin(), vec.end(), 0);

    // Displaying sorted elements
    cout << "Sorted elements: ";
    for (int n : vec) {
        cout << n << " ";
    }

    cout << endl << "Count of 3: " << count3 << endl;
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
