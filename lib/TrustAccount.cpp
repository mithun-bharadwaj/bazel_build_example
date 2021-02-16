#include "TrustAccount.h"


TrustAccount::TrustAccount(std::string name_val, double balance_val, double interest_rate_val, int withdrawals_val)
    :SavingsAccount(name_val, balance_val, interest_rate_val), withdrawals{withdrawals_val}
{
}

TrustAccount::~TrustAccount()
{
}


bool TrustAccount::deposit(double amount){
    if (amount >= 5000.0)
        amount += deposit_bonus;
    return SavingsAccount::deposit(amount);
}


bool TrustAccount::withdraw(double amount){
    withdrawals += 1;
    if (withdrawals == 4){
        std::cout << "\n4th withdrawal" << std::endl;
        return false;
    }
        
    if (amount >= 0.2*balance){
        std::cout << "\nYou're withdrawing more than the allowed amount" << std::endl;
        return false;
    }
    
    return SavingsAccount::withdraw(amount);
        
    
}



std::ostream& operator<<(std::ostream& os, const TrustAccount& obj){
    os << "\n[Trust Account: " << obj.name << " : " << obj.balance << " : " << obj.interest_rate << "%]";
    return os;
}

