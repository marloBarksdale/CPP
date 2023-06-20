#include "Account.h"

#include <iostream>
#include <vector>

using namespace std;
int main()
{

    cout << Account::get_num_accounts() << endl;
    Account frank_account;
    Account john;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000);

    if(frank_account.deposit(200)) {
        cout << "Deposit OK" << endl;
    } else {
        cout << "Deposit not allowed" << endl;
    }

    vector<Account> vec;

    vec.push_back(Account{ "red", 50.5 });

    cout << Account::get_num_accounts() << endl;

    Account frank_copy{ frank_account };

    cout << john.get_name() << endl;
    cout << "Copy: " << frank_copy.get_name() << endl;
    cout << "Copy Balance: " << frank_copy.get_balance() << endl;

    if(frank_account.withdraw(500))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;

    if(frank_account.withdraw(1500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    cout << Account::get_num_accounts() << endl;

    return 0;
}