#ifndef _ACC_
#define _ACC_
#include <string>

class Account
{
    friend std::ostream& operator<<(std::ostream& os, const Account& obj);
    
private:
    static constexpr const char* init_name = "Unamed Account";
    static constexpr const double init_balance = 0.0;

protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name_val = init_name, double balace_val = init_balance);
    ~Account();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;

};

#endif // _ACC_
