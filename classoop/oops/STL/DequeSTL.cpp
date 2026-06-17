#include <iostream>
#include <deque>
using namespace std;

int main() {

    // 1️⃣ Declaration
    deque<int> dq;

    // 2️⃣ push_back() → add at end
    dq.push_back(10);
    dq.push_back(20);

    // 3️⃣ push_front() → add at beginning
    dq.push_front(5);
    dq.push_front(1);

    cout << "After push_front & push_back: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 4️⃣ pop_back() → remove from end
    dq.pop_back();

    // 5️⃣ pop_front() → remove from beginning
    dq.pop_front();

    cout << "After pop_front & pop_back: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 6️⃣ insert(position, value)
    dq.insert(dq.begin() + 1, 15);
    cout << "After insert at index 1: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 7️⃣ erase(position)
    dq.erase(dq.begin() + 1);
    cout << "After erase at index 1: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // ---------- Access Functions ----------

    // 8️⃣ at()
    cout << "Element at index 0 using at(): " << dq.at(0) << endl;

    // 9️⃣ front()
    cout << "First element using front(): " << dq.front() << endl;

    // 🔟 back()
    cout << "Last element using back(): " << dq.back() << endl;

    // 1️⃣1️⃣ data()  
    // int* ptr = dq.data();
    // cout << "Access using data(): ";
    // for (int i = 0; i < dq.size(); i++) {
    //     cout << *(ptr + i) << " ";
    // }
    // cout << endl;

    // 1️⃣2️⃣ clear()
    dq.clear();
    cout << "Size after clear(): " << dq.size() << endl;

    return 0;
}
