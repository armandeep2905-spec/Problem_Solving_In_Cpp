#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {1,1, -2, 1, 0, 5};
    int target = 2;
    unordered_map<int,int> freq;
    int count = 0;

    for (int x : v) {
        int need = target - x;

        if (freq.count(need)) {
            count += freq[need];
        }

        freq[x]++;
    }

    cout << count;
}
