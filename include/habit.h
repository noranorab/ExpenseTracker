// a habit has a category of either credit or debit
// a habit has an amount

#include "balance.h"
#include <string>


#ifndef HABIT_H
#define HABIT_H

class Habit {
    public:
        Habit(const std::string& label, int amount, balance category);

        int getAmount();
        void setLabel(const std::string& label);
        void setCategory(balance category);

    private:
        int amount;
        std::string label;
        balance category;
        
};

#endif