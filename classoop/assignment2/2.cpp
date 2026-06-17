#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l;
    int b;

public:
    void setL()
    {
        cout << "Enter l" << endl;
        cin >> l;
    }
    void setB()
    {
        cout << "Enter b " << endl;
        cin >> b;
    }
    void getArea()
    {
        cout << "Area is " << l * b << endl;
    }
};

int main()
{
    Rectangle set[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "For rectangle " << i + 1 << endl;
        set[i].setL();
        set[i].setB();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "For rectangle " << i + 1 << endl;
        set[i].getArea();
    }
}