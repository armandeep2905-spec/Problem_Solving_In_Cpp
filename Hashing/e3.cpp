#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> a={1, 2, 5, 4, 0};
    vector<int> b={2, 4, 5, 0, 1};
unordered_map<int,int> freq;
    for(auto it: a){
        freq[it]++;
    }
}
