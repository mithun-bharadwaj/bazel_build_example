#include "CheckingAccount.h"



CheckingAccount::CheckingAccount(std::string name_val, double balance_val)
  :Account(name_val, balance_val)
{
}



CheckingAccount::~CheckingAccount()
{
}


bool CheckingAccount::withdraw(double amount){
    amount += withdral_charge;
    return Account::withdraw(amount);
}


std::ostream& operator<<(std::ostream& os, const CheckingAccount& obj){
    os << "\n[Checking Account: " << obj.name << " : " << obj.balance;
    return os;
}




