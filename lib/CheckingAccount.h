#ifndef __CHECKACC__
#define __CHECKACC__

#include "Account.h"
#include <iostream>
#include <string>


class CheckingAccount : public Account
{
    
friend std::ostream& operator<<(std::ostream& os, const CheckingAccount& obj);

private:
    static constexpr const char* init_name = "Unnamed Checking Account";
    static constexpr const double init_bal = 0.0;
    static constexpr const double withdral_charge  = 1.5;

public:
    CheckingAccount(std::string name_val = init_name, double balance_val=init_bal);
    ~CheckingAccount();
    
    bool withdraw(double amount);

};

#endif // __CHECKACC__
