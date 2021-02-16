#ifndef __SAVACC__
#define __SAVACC__

#include "Account.h"

class SavingsAccount: public Account
{
    friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& obj);

private:
    static constexpr const char* init_name = "Unnamed Savings Account";
    static constexpr const double init_balance = 0.0;
    static constexpr const double init_int_rate = 0.0;
    
protected:
    double interest_rate;
    

public:
    SavingsAccount(std::string name_val=init_name, double balance_val=init_balance, double interest_rate_cal = init_int_rate);
    ~SavingsAccount();
    
    bool deposit(double amount);

};

#endif // __SAVACC__
