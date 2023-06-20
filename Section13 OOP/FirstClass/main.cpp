#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    // attributes
    string name;
    int health;
    int xp;

    //    methods

    void talk(string say) { cout << name << " says " << say << endl; }
    bool is_dead();
};

class Account
{
public:
    string name;
    double balance;

    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player frank;
    
    Player*george = new Player;
    
    george->name = "george";
    george->talk("Good morning moron!");

    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hello");

    return 0;
}
