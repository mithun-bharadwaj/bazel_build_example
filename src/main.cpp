// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "../lib/SavingsAccount.h"
#include "../lib/CheckingAccount.h"
#include "../lib/TrustAccount.h"
#include "../lib/Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount {} );
    sav_accounts.push_back(SavingsAccount {"Superman"} );
    sav_accounts.push_back(SavingsAccount {"Batman", 2000} );
    sav_accounts.push_back(SavingsAccount {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking 

    vector<CheckingAccount> check_accounts;
    check_accounts.push_back(CheckingAccount {} );
    check_accounts.push_back(CheckingAccount {"Superman"} );
    check_accounts.push_back(CheckingAccount {"Batman", 2000} );
    check_accounts.push_back(CheckingAccount {"Wonderwoman", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    
    // Trust

    vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount {} );
    trust_accounts.push_back(TrustAccount {"Superman"} );
    trust_accounts.push_back(TrustAccount {"Batman", 2000} );
    trust_accounts.push_back(TrustAccount {"Wonderwoman", 10000, 5.0} );

    display(trust_accounts);
    deposit(trust_accounts, 2001);
    withdraw(trust_accounts, 20);
    withdraw(trust_accounts, 20);
    withdraw(trust_accounts, 20);
    withdraw(trust_accounts, 20);
    

    return 0;
}
