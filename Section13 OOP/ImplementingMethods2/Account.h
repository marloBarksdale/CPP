#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
class Account
{

private:
    std::string name;
    double balance;
    int *data;
    static int num_accounts;

public:
    //    Account()
    //        : Account { "No name" }
    //
    //    {
    //    }

    Account(std::string n = "No names", double bal = 12);
      

    

    void set_balance(double bal) { balance = bal; }

    double get_balance() { return balance; }

    void set_name(std::string name);

    std::string get_name();
    
    static int get_num_accounts();

    bool deposit(double amount);
    bool withdraw(double amount);
    
    //copy constuctor
    Account(const Account &);
    
    //Move Constructor
    Account(Account &&)noexcept;
    
    //Destructor
    ~Account(){
        --num_accounts;
        std::cout<<"Destructor called"<<std::endl;
    }
};


#endif // _ACCOUNT_H_
