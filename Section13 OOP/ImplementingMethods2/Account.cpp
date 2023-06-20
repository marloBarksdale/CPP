#include "Account.h"

int Account::num_accounts = 0;
void Account::set_name(std::string name) { this->name = name; }

std::string Account::get_name() { return name; }
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

int Account::get_num_accounts() { return num_accounts; }

Account::Account(std::string n, double bal)
    : name{ n }
    , balance{ bal }
{
    this->data = new int;
    *data = 60;
    std::cout << "Constructor" << std::endl;
    ++num_accounts;
}

Account::Account(const Account& source)
    : name{ source.name }
    , balance{ source.balance * 6 }
{
    this->data = new int;
    *data = *source.data;
    std::cout << "Copy called for " << name << std::endl;
}

Account::Account(Account&& moving) noexcept
    : name{ moving.name }
    , balance{ moving.balance * 6 }
    , data{ moving.data }
{

    moving.data = nullptr;
    std::cout << "Moving called" << std::endl;
}


