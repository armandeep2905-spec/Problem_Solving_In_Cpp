#include<iostream>
using namespace std;

class gun{
    
public:
    int damage;
    int scope;
};
class player{
    private:
string name;
int level;
int health;
bool alive;
gun vgun;
helmet H;


public:
void setname(string name)  {this->name=name;}
string getname() {return name;}
void setlevel(int level)  {this->level=level;}
int getlevel() {return level;}
void sethealth(int health)  {this->health=health;}
int gethealth() {return health;}
void setalive(bool alive){this->alive=alive;}
bool getalive(){return alive;}
void setvgun(gun vgun){this->vgun=vgun;}
gun getvgun(){return vgun;}

class helmet{
    private:
    int hlevel;
    int hp;
public:
    void sethlevel(int hlevel){this->hlevel=hlevel;}
int gethlevel(){return hlevel;}
void sethp(int hp){this->hp=hp;}
int gethp(){return hp;}
};
void sethelemt(int level){
    helmet *Helmet = new helmet;
    Helmet->sethlevel(level);
    int health;
    if(level==1)
        health=100;
        if (level==2)
        health=200;
        if(level==3)
        health=300;
Helmet->sethp(health);
this->helmet= *helmet;
    
}

};


int main(){
gun akm;
akm.damage=100;
akm.scope=2;

gun awm;
awm.damage=200;
awm.scope=8;

    player a1;
a1.setname("aru");
a1.setalive(true);
a1.sethealth(100);
a1.setlevel(9);
a1.setvgun(akm);

player a2;
a2.setname("aru2");
a2.setalive(true);
a2.sethealth(100);
a2.setlevel(90);
a2.setvgun(awm);

player *a3=new player;
a3->sethealth(100);
a3->setname("aru3");
a3->setalive(false);
a3->setlevel(10);
a3->setvgun(akm);


    cout<<a1.getname()<<endl<<a1.getlevel()<<endl<<a1.gethealth()<<endl<<a1.getalive()<<endl;

}