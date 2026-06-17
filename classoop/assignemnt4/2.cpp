// Write a C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.
#include <iostream>
using namespace std;

class number1
{

    int number;

public:
    void setnumber(int number) { this->number = number; }
    int getnumber() { return number; }
};

class square : public number1
{
public:
    int square1()
    {
        return getnumber() * getnumber();
    }
};

class cube : public number1
{
public:
    int cube1()
    {
        return getnumber() * getnumber() * getnumber();
    }
};

int main()
{
    number1 n;
    int u;
    cout << "enter the number" << endl;
    cin >> u;
    n.setnumber(u);
    square k;
    k.setnumber(u);
    cout << k.square1() << endl;
    cube j;
j.setnumber(u);
    cout << j.cube1();
}