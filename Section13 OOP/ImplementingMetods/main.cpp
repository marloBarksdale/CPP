#include <iostream>

using namespace std;
class Account
{

private:
    string name;
    double balance;

public:
    void set_balance(double bal) { balance = bal; }

    double get_balance() { return balance; }

    void set_name(string name);

    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string name) { this->name = name; }

string Account::get_name() { return name; }
bool Account::deposit(double amount)
{
    this->balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount > 0) {
        balance -= amount;
        return true;
    }
    return false;
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000);

    if(frank_account.deposit(200)) {
        cout << "Deposit OK" << endl;
    } else {
        cout << "Deposit not allowed" << endl;
    }

    if(frank_account.withdraw(500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;

    if(frank_account.withdraw(1500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    return 0;
}
