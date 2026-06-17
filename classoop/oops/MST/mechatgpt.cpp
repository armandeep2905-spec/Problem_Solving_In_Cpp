#include <iostream>
using namespace std;

class gun {
public:
    int damage;
    int scope;

    void setdamage(int d) { damage = d; }
    void setscope(int s) { scope = s; }
};

class player {
private:
    int health;
    int score;
    string name;
    gun bandook;
    bool alive;

public:
    void sethealth(int health) { this->health = health; }
    int gethealth() { return health; }

    void setscore(int score) { this->score = score; }
    int getscore() { return score; }

    void setbandook(gun bandook) { this->bandook = bandook; }
    gun getbandook() { return bandook; }

    void setalive(bool alive) { this->alive = alive; }
    bool getalive() { return alive; }

    void setname(string name) { this->name = name; }
    string getname() { return name; }
};

// Return by reference to avoid copying
player& maxscore(player& a, player& b) {
    return (a.getscore() > b.getscore()) ? a : b;
}

int main() {
    gun akm;
    akm.setdamage(100);
    akm.setscope(2);

    gun awm;
    awm.setdamage(200);
    awm.setscope(8);

    int h, s, h1, s1, h2, s2;

    cout << "beta health btao" << endl;
    cin >> h;
    cout << "beta score btao" << endl;
    cin >> s;

    player aru;
    aru.sethealth(h);
    aru.setscore(s);
    aru.setbandook(akm);

    player bd;
    cout << "beta health btao" << endl;
    cin >> h1;
    cout << "beta score btao" << endl;
    cin >> s1;
    bd.sethealth(h1);
    bd.setscore(s1);

    player *josh = new player;
    cout << "beta health btao" << endl;
    cin >> h2;
    cout << "beta score btao" << endl;
    cin >> s2;
    josh->sethealth(h2);
    josh->setscore(s2);

    cout << "health hai " << aru.gethealth() << " score hai " << aru.getscore() << endl;
    cout << "health hai " << bd.gethealth() << " score hai " << bd.getscore() << endl;
    cout << "health hai " << josh->gethealth() << " score hai " << josh->getscore() << endl;

    player& winner = maxscore(bd, aru);
    cout << "max score is " << winner.getscore() << endl;

    delete josh; // free memory
    return 0;
}
