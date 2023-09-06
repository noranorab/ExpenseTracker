#include "..\include\balance.h"
#include <iostream>

std::ostream& operator<<(std::ostream& cout, balance b){
    switch (b)
    {
    case balance::CREDIT:
        cout << "CREDIT\t\t";
        return cout;
        
    
    case balance::DEBIT:
        cout << "\t\tDEBIT";
        return cout;
    
    default:
        break;
    }
}
