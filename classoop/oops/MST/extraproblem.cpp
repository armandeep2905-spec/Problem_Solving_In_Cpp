#include <iostream>
using namespace std;

// -----------------------------
// Abstract Base Class
// -----------------------------
class Vehicle {
public:
    virtual double calculateToll() const = 0;   // pure virtual
    virtual void displayInfo() const = 0;       // pure virtual
    virtual ~Vehicle() {}                       // virtual destructor
};

// -----------------------------
// Derived Class: Car
// -----------------------------
class Car : public Vehicle {
    string numberPlate;
public:
    Car(string plate) : numberPlate(plate) {}

    double calculateToll() const override {
        return 50.0; // flat rate
    }

    void displayInfo() const override {
        cout << "Car | Plate: " << numberPlate
             << " | Toll: Rs." << calculateToll() << endl;
    }
};

// -----------------------------
// Derived Class: Bus
// -----------------------------
class Bus : public Vehicle {
    int passengers;
public:
    Bus(int p) : passengers(p) {}

    double calculateToll() const override {
        return 30.0 + passengers * 2.0;
    }

    void displayInfo() const override {
        cout << "Bus | Passengers: " << passengers
             << " | Toll: Rs." << calculateToll() << endl;
    }
};

// -----------------------------
// Derived Class: EmergencyVehicle
// -----------------------------
class EmergencyVehicle : public Vehicle {
    string type;
public:
    EmergencyVehicle(string t) : type(t) {}

    double calculateToll() const override {
        return 0.0; // exempted
    }

    void displayInfo() const override {
        cout << "Emergency Vehicle | Type: " << type
             << " | Toll: Rs." << calculateToll() << " (Exempted)" << endl;
    }
};

// -----------------------------
// Derived Class: Truck (newly added)
// -----------------------------
class Truck : public Vehicle {
    double weight;
public:
    Truck(double w) : weight(w) {}

    double calculateToll() const override {
        return 100.0 + (weight * 0.5);
    }

    void displayInfo() const override {
        cout << "Truck | Weight: " << weight
             << " tons | Toll: Rs." << calculateToll() << endl;
    }
};

// -----------------------------
// MAIN FUNCTION
// -----------------------------
int main() {
    // Array of base class pointers
    Vehicle* vehicles[5];

    // Creating and assigning derived class objects
    vehicles[0] = new Car("DL10AB1234");
    vehicles[1] = new Bus(25);
    vehicles[2] = new EmergencyVehicle("Ambulance");
    vehicles[3] = new Truck(15.5);
    vehicles[4] = new Car("PB07XY6789");

    double totalToll = 0.0;

    cout << "---- Vehicle Toll Details ----" << endl;
    for (int i = 0; i < 5; i++) {
        vehicles[i]->displayInfo();                // Dynamic dispatch
        totalToll += vehicles[i]->calculateToll(); // Late binding
    }

    cout << "\nTotal Toll Collected: Rs." << totalToll << endl;

    // Free allocated memory
    for (int i = 0; i < 5; i++)
        delete vehicles[i];

    return 0;
}
