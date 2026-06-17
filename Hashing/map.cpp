#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 3, 2, 4, 3, 2};

    unordered_map<int, int> freq;  // hash map

    // Step 1: Count frequencies
    for (int x : nums) {
        freq[x]++;  // increase count
    }

    // Step 2: Print results
    cout << "Frequencies:\n";
    for (auto p : freq) {
        cout << p.first << " → " << p.second << " times" << endl;
    }

    return 0;
}
