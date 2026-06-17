#include <iostream>
#include <set>
using namespace std;

int main() {

    // 1️⃣ Constructors

    set<int> s1;                     // default constructor
    set<int> s2 = {10, 20, 30};      // initializer_list constructor

    cout << "Initial set s2: ";
    for (int x : s2) cout << x << " ";
    cout << endl;

    // 2️⃣ Capacity functions

    cout << "Size of s2: " << s2.size() << endl;
    cout << "Is s2 empty? " << (s2.empty() ? "Yes" : "No") << endl;

    // 3️⃣ insert(value) – inserts unique values only

    s2.insert(25);   // new element
    s2.insert(20);   // duplicate (ignored automatically)

    cout << "After inserting 25 and duplicate 20: ";
    for (int x : s2) cout << x << " ";
    cout << endl;

    // 4️⃣ erase(value)

    s2.erase(10);   // removes element with value 10

    cout << "After erasing 10: ";
    for (int x : s2) cout << x << " ";
    cout << endl;

    // 5️⃣ find(value)

    if (s2.find(25) != s2.end())
        cout << "Element 25 found in set\n";
    else
        cout << "Element 25 not found in set\n";

    // 6️⃣ count(value)

    cout << "Count of 30 in set: " << s2.count(30) << endl;
    cout << "Count of 100 in set: " << s2.count(100) << endl;

    // 7️⃣ lower_bound(value) and upper_bound(value)
    for (int x : s2) cout << x << " ";
    cout << endl;

    cout << "Elements between 20 and 35 using lower_bound & upper_bound: ";
    for (auto it = s2.lower_bound(20); it != s2.upper_bound(35); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 8️⃣ clear()

    s2.clear();
    cout << "After clear(): Size = " << s2.size()
         << ", Is empty? " << (s2.empty() ? "Yes" : "No") << endl;

    return 0;
}
