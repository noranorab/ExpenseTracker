// created by Nora on 06/09/2023

#include <iostream>
#include <vector>

#include "..\include\habit.h"
#include "..\include\user.h"
#include "..\include\balance.h"

using namespace std;


bool check_credentials(string username, string password);

int main()
{
    string username, password;
    cout << "Enter your username : " << endl;
    cin >> username;
    cout << "\nEnter your password : " << endl;
    cin >> password;
    cout << endl;

    cout << "\t\t\tLabel\tAmount\tCREDIT\tDEBIT\tAccount" << endl;
    cout << "\t\t\t\t0" << "\tCREDIT\tDEBIT\t"<< 0 << endl;
    cout << "Enter your spendings :\n";
    while (true){
      
        User user("username", "password");
        string label = " ";
        int amount = 0;
        string type;
        user.setAmount(2000);
        int account = user.getAmount();
        cin >> label >> amount >> type;
        

        if (type == "CREDIT"){
            account -= amount;
        }else if (type == "DEBIT"){
            account += amount;
        }else{
            account +=0;
        }
        cout << "\t\t\t" << label << "\t" << amount << "\t" << type <<"\t\t" << account;
        cout << endl;

        string choice;
        cout << "terminate ? press yes or no\n";
        cin >> choice ;
        if (choice == "yes") break;
        else cout <<"Enter your spendings :\t";


        //vector<Habit> userHabits = user.getHabits();

    }
}
