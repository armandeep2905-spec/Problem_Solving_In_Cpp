// Q3 (b) Write a program in C++ having the following properties: (3 marks)
// • Define a class having two data variables of integer type in private scope.
// • Array of objects should be declared in main function dynamically (using new
// operator)
// • Input the data variables using a member function named as void set_data() in
// public scope.
// • Increment the values of data variables by one using a member function named
// void update_data() in public scope having array of object as an argument.
// • For displaying the updated value of data variables, create a member function
// named as void output() in public scope. 


#include <iostream>
using namespace std;

class MyClass {
private:
    int x, y;   // two private data members

public:
    // Function to input values
    void set_data() {
        cout << "Enter values for x and y: ";
        cin >> x >> y;
    }

    // Function to increment values (takes array of objects and size)
    void update_data(MyClass arr[], int n) {
        for (int i = 0; i < n; i++) {
            arr[i].x++;
            arr[i].y++;
        }
    }
void update_d() {
            x++;
            y++;
        
    }
    // Function to display values
    void output() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of objects: ";
    cin >> n;

    // Dynamically creating array of objects
    MyClass *obj = new MyClass[n];

    // Input values
    for (int i = 0; i < n; i++) {
        cout << "For object " << i + 1 << ": ";
        obj[i].set_data();
    }

    // Update all objects (using first object to call update_data)
    // obj[0].update_data(obj, n);

    for(int i=0;i<n;i++){
        obj[i].update_d();
    }
    MyClass x;
    x.set_data(1,2)
;
x.update_d();
    // Display updated values
    cout << "\nUpdated values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Object " << i + 1 << ": ";
        obj[i].output();
    }

    // Free allocated memory
    delete[] obj;

    return 0;
}


