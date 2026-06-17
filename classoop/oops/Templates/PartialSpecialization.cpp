#include <iostream>
using namespace std;

// --------------------------------------------------
// 1️⃣ GENERAL TEMPLATE (used when types are different)
// --------------------------------------------------
template<typename T, typename U>
class air {
public:
    void show() {
        cout << "General Template: air<T, U>" << endl;
    }
};

// --------------------------------------------------
// 2️⃣ PARTIAL SPECIALIZATION (used when BOTH TYPES ARE SAME)
// --------------------------------------------------
template<typename T>
class air<T, T> {
public:
    void show() {
        cout << "Partial Specialization: air<T, T> where both types match" << endl;
    }
};

// --------------------------------------------------
// 3️⃣ FULL SPECIALIZATION (used ONLY for air<bool, bool>)
// --------------------------------------------------
template<>
class air<bool, bool> {
public:
    void show() {
        cout << "FULL Specialization: air<bool, bool>" << endl;
    }
};

int main() {

    // -----------------------------
    // Case 1: TYPES ARE DIFFERENT
    // -----------------------------
    air<int, double> p1;
    p1.show();    
    // Output → General Template

    // -----------------------------
    // Case 2: TYPES ARE SAME
    // -----------------------------
    air<int, int> p2;
    p2.show();    
    // Output → Partial Specialization

    // -----------------------------
    // Case 3: FULL SPECIALIZED TYPE
    // -----------------------------
    air<bool, bool> p3;
    p3.show();    
    // Output → FULL Specialization

    return 0;
}
