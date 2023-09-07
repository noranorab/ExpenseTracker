// user enters a spending habit
// user can choose its category (debit/credit)
// user can get history records

#include "habit.h"
#include <string>
#include <vector>

class User {
    public:
        User(const std::string& username, const std::string& password);
        User() : amount(0) {};

        void setPassword(char* password);
        int getAmount();
        void setAmount(const int& amount);
    
    private:
        int amount;
        std::string username;
        std::string password;
};