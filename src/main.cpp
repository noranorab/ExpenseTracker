// created by Nora on 06/09/2023

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

#include "..\include\habit.h"
#include "..\include\user.h"
#include "..\include\balance.h"

using namespace std;


bool check_credentials(const string& username, const string& password){
    ifstream cred_file("credentials.txt");

    if (!cred_file) {
        cerr << "Error opening the file." << endl;
        return false; // Unable to open the file.
    }

    istream_iterator<string> start(cred_file), end;
    vector<string> credentials(start, end);
    for (auto it = credentials.begin(); it != credentials.end(); ++it){
        if (*it == username){
            ++it;
            if (it != credentials.end() && *it == password) {
                cout << "You are connected\n";
                return true;
            }
        }
    }
    cout << "Credentials are incorrect. Try again...";
    return false;

};

int main()
{
    string username, password;
    cout << "Enter your username : " << endl;
    cin >> username;
    cout << "\nEnter your password : " << endl;
    cin >> password;
    cout << endl;
    int account;
    
    cout << "How much do you have? \n";
    cin >> account;

    ofstream outFile("records.txt");
    

    
    while (check_credentials(username, password)){
        cout << "\t\t\tLabel\tAmount\tCREDIT\tDEBIT\tAccount" << endl;
        cout << "Enter your spendings :\n";
        User user(username, password);
        string label = " ";
        string type;
        user.setAmount(account);
        int amount;
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
        
        outFile << label << "\t" << amount << "\t" << type <<"\t\t" << account << endl;


        string choice;
        cout << "terminate ? press yes or no\n";
        cin >> choice ;
        if (choice == "yes") break;
        else cout <<"Enter your spendings :\t";


        //vector<Habit> userHabits = user.getHabits();

    }
    outFile.close();
}
