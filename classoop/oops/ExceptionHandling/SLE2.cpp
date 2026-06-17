#include <iostream>
#include <stdexcept>   // For standard exceptions
#include <limits>      // For numeric_limits
#include <cmath>       // For log()

using namespace std;

// Function to demonstrate std::range_error
double computeLog(double x) {
    if (x <= 0) {
        throw range_error("Logarithm domain error: x must be positive.");
    }
    return log(x);   // Compute natural logarithm
}

// Function to demonstrate std::overflow_error
int multiplyLargeNumbers(int a, int b) {
    if (a > 0 && b > 0 && (a*b)>!INT_MAX) {
        throw overflow_error("Multiplication overflow!");
    }
    return a * b;
}

// Function to demonstrate std::underflow_error
double divideSmallNumbers(double a, double b) {
    if (b == 0) {
        throw underflow_error("Division underflow: Division by zero.");
    }
    return a / b;
}

int main() {

    // Demonstrate std::range_error
    try {
        cout << "Logarithm of -1: " << computeLog(-1) << endl;
    }
    catch (const range_error& e) {
        cout << "Range Error: " << e.what() << endl;
    }

    // Demonstrate std::overflow_error
    try {
        int a = numeric_limits<int>::max() / 2;
        int b = 3;
        cout << "Multiplication of large numbers: "
             << multiplyLargeNumbers(a, b) << endl;
    }
    catch (const overflow_error& e) {
        cout << "Overflow Error: " << e.what() << endl;
    }

    // Demonstrate std::underflow_error
    try {
        double verySmallNumber = numeric_limits<double>::min();
        double divisor = 0;   // Division by zero
        cout << "Division result: "
             << divideSmallNumbers(verySmallNumber, divisor) << endl;
    }
    catch (const underflow_error& e) {
        cout << "Underflow Error: " << e.what() << endl;
    }

    return 0;
}
