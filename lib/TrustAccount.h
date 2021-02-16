#ifndef __TRUSTACC__
#define __TRUSTACC__

#include <iostream>
#include "SavingsAccount.h"
#include <string>

class TrustAccount : public SavingsAccount
{
    friend std::ostream& operator<<(std::ostream& os, const TrustAccount& obj);

private:
    static constexpr const char* init_name = "Unnamed Savings Account";
    static constexpr const double init_balance = 0.0;
    static constexpr const double init_int_rate = 0.0;
    static constexpr const double deposit_bonus = 50.0;
    
protected:
    int withdrawals;

public:
    TrustAccount(std::string name_val=init_name, double balance_val=init_balance, double interest_rate_val=init_int_rate, int withdrawals_val=0);
    ~TrustAccount();
    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif // __TRUSTACC__
