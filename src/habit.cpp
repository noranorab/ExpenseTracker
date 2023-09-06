#include "..\include\habit.h"


Habit::Habit(const std::string& label, int amount, enum balance category){

  this->label = label;
  this->amount = amount;
  this->category = category;

}

int Habit::getAmount(){ return this->amount; }

void Habit::setLabel(const std::string& label){ this->label = label; }

void Habit::setCategory(enum balance category){ this->category = category; }

