#include <iostream>
using namespace std;

class Appliance {
    float power;   // in kW
    char name;     // just a char for simplicity (e.g., 'F' = Fan)
public:
    Appliance(float p = 0.0, char n = 'U') {
        power = p;
        name = n;
    }
    float getPower() const { return power; }
    char getName() const { return name; }
    void display() const {
        cout << "  Appliance " << name << " | Power = " << power << " kW\n";
    }
};

class House {
    Appliance apps[10];   // each house has 3 appliances
    int houseId;
public:
    House(int id, Appliance a1, Appliance a2, Appliance a3) {
        houseId = id;
        apps[0] = a1;
        apps[1] = a2;
        apps[2] = a3;
    }
    float totalConsumption() const {
        float sum = 0;
        for (int i = 0; i < 3; i++)
            sum += apps[i].getPower();
        return sum;
    }
    void display() const {
        cout << "\nHouse " << houseId << " Appliances:\n";
        for (int i = 0; i < 3; i++)
            apps[i].display();
        cout << "  >> Total House " << houseId
             << " = " << totalConsumption() << " kW\n";
    }
    friend class Grid; // Grid can access private members
};

class Grid {
    House* houses[2];  // grid manages 2 houses (for demo)
public:
    Grid(House* h1, House* h2) {
        houses[0] = h1;
        houses[1] = h2;
    }
    float cityConsumption() const {
        return houses[0]->totalConsumption() + houses[1]->totalConsumption();
    }
    void displayReport() const {
        cout << "\n--- Power Grid Report ---\n";
        houses[0]->display();
        houses[1]->display();
        cout << "\nTOTAL POWER CONSUMPTION (City) = "
             << cityConsumption() << " kW\n";
    }
};

// Friend function (just an example, prints total city power)
void power(Grid &g) {
    cout << "\n[Friend Function] Total Power in Grid = "
         << g.cityConsumption() << " kW\n";
}

int main() {
    // Appliances for house 1
    Appliance a1(0.1, 'F'); // Fan
    Appliance a2(0.2, 'T'); // TV
    Appliance a3(0.8, 'R'); // Refrigerator

    // Appliances for house 2
    Appliance b1(0.15, 'F'); 
    Appliance b2(0.25, 'T'); 
    Appliance b3(1.5, 'H'); // Heater

    // Create houses
    House h1(1, a1, a2, a3);
    House h2(2, b1, b2, b3);

    // Create grid
    Grid g(&h1, &h2);

    // Show report
    g.displayReport();

    // Use friend function
    power(g);

    return 0;
}
