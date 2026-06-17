#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // 1️⃣ push_back() → adds element at the end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "After push_back(): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 2️⃣ pop_back() → removes last element
    v.pop_back();
    cout << "After pop_back(): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 3️⃣ insert(position, value) → insert at given position
    v.insert(v.begin() + 1, 15);   // insert 15 at index 1
    cout << "After insert(): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 4️⃣ erase(position) → removes element at given position
    v.erase(v.begin() + 1);   // erase element at index 1
    cout << "After erase(): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 5️⃣ emplace_back() → constructs element directly at end
    v.emplace_back(40);
    cout << "After emplace_back(): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // ---------- Access Functions ----------

    // 6️⃣ at(index) → bounds-checked access
    cout << "Element at index 1 using at(): " << v.at(1) << endl;

    // 7️⃣ front() → first element
    cout << "First element using front(): " << v.front() << endl;

    // 8️⃣ back() → last element
    cout << "Last element using back(): " << v.back() << endl;

    // 9️⃣ data() → pointer to underlying array
    int* ptr = v.data();
    cout << "Accessing elements using data(): ";
    for (int i = 0; i < v.size(); i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // 🔟 clear() → removes all elements
    v.clear();
    cout << "Size after clear(): " << v.size() << endl;

    return 0;
}
