#include "..\include\user.h"

User::User(const std::string& username, const std::string& password){
    this->username = username;
    this->password = password;
}

void User::setPassword(char* password){
    this->password = password;
}

int User::getAmount(){ return this->amount; }
void User::setAmount(int amount){ this->amount = amount;}

std::vector<Habit> User::getHabits() const { return this->habits; }
