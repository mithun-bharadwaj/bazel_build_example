#include "Account.h"
#include <iostream>

Account::Account(std::string name_val, double balance_val):name{name_val}, balance{balance_val}{
}


Account::~Account()
{
}


bool Account::deposit(double amount){
    if (amount < 0)
        return false;
    balance += amount;
    return true;
}


bool Account::withdraw(double amount){
    if (balance - amount < 0)
        return false;
    else{
        balance -= amount;
        return true;
    }
}


double Account::get_balance() const{
    return balance;
}


std::ostream& operator<<(std::ostream& os, const Account& obj){
    os << "\n[Account: " << obj.name << " : " << obj.balance << "]";
    return os;
}


