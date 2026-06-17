#include <iostream>
using namespace std;

class mammal
{
private:
    int height;
    int weight;
    int population;

public:
    void setheight(int height) { this->height = height; }
    int getheight() { return height; }
    void setweight(int weight) { this->weight = weight; }
    int getweight() { return weight; }
    void setpopulation(int population) { this->population = population; }
    int getpopulation() { return population; }
};

class human 
{public:
   

    string colour;

    void setcolour(string colour) { this->colour = colour; }
    string getcolour() { return colour; }
};

class snake : public human,public mammal
{
    bool poison;
    void setpoison(bool poison) { this->poison = poison; }
    bool getpoison() { return poison; }
};

int main()
{
human aru;

}