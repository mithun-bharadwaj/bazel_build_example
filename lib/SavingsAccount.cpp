#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(std::string name_val, double balance_val, double interest_val):Account(name_val, balance_val), interest_rate{interest_val}{
    
}



SavingsAccount::~SavingsAccount()
{
}


bool SavingsAccount::deposit(double amount){
    amount += (amount*interest_rate/100);
    return Account::deposit(amount);
}


std::ostream& operator<<(std::ostream& os, const SavingsAccount& obj){
    os << "\n[Savings Account: " << obj.name << " : " << obj.balance << " : " << obj.interest_rate << "%]";
    return os;
}




