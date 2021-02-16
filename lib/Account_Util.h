#ifndef __ACCUTIL__
#define __ACCUTIL__

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"



//Normal account
void display(const std::vector<Account>& accounts);
void deposit(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);


//Savings Account
void display(const std::vector<SavingsAccount>& accounts);
void deposit(std::vector<SavingsAccount>& accounts, double amount);
void withdraw(std::vector<SavingsAccount>& accounts, double amount);


//Checking Account
void display(const std::vector<CheckingAccount>& accounts);
void deposit(std::vector<CheckingAccount>& accounts, double amount);
void withdraw(std::vector<CheckingAccount>& accounts, double amount);


//Trust Account
void display(const std::vector<TrustAccount>& accounts);
void deposit(std::vector<TrustAccount>& accounts, double amount);
void withdraw(std::vector<TrustAccount>& accounts, double amount);

#endif // __ACCUTIL__
