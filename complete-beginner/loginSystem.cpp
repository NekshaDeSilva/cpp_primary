#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

class Account {
public:
    string name;
    string password;
    string accountType;

    void checkForValidation() {
        srand(time(0));
        int tokenCode = rand() % 1000 + 1;
        string tandCStatus;
        cout << "This Is X validation service." << endl;
        cout << "Terms of Use: Do you agree? (yes/no) Refer Id: " << tokenCode << endl;
        getline(cin, tandCStatus);
        if (tandCStatus == "yes") {
            cout << "Please enter your name: ";
            getline(cin, name);
            cout << "Please enter your password: ";
            getline(cin, password);
            accountType = initional();
            cout << "Redirecting.." << endl;
        } else {
            cout << "You have not accepted the terms and conditions." << endl;
        }
    }

    string initional() {
        string accountTypeX;
        cout << "Are you a professional? (yes/no): ";
        getline(cin, accountTypeX);
        if (accountTypeX == "yes") {
            cout << "You are a professional." << endl;
            cout << "Redirecting to professional account system..." << endl;
            return "admin";
        } else if (accountTypeX == "no") {
            cout << "You are not a professional." << endl;
            cout << "Redirecting to normal account system..." << endl;
            return "user";
        } else {
            cout << "Invalid input." << endl;
            return "user";
        }
    }
};

void runAdmin(const Account& user) {
    cout << "Welcome to admin panel." << endl;
    cout << "This is an admin panel." << endl;
    cout << "Redirecting to admin system..." << endl;
    cout << "Your name is: " << user.name << endl;
    cout << "Your password is: " << user.password << endl;
    cout << "Your account type is: " << user.accountType << endl;
    cout << "You're logged in successfully." << endl;
    cout << "Here's a company secret, our CEO is a woman hahahaha" << endl;
}

int main() {
    srand(time(0));
    int userID = rand() % 9633 + 1;
    cout << "Welcome to X accounts" << endl;
    cout << "This is a login system." << endl;
    cout << "Redirecting to account system..." << endl;

    Account user;
    user.checkForValidation();

    cout << "Your name is: " << user.name << endl;
    cout << "Your password is: " << user.password << endl;
    cout << "Your account type is: " << user.accountType << endl;
    cout << "Your account is created successfully." << endl;

    if (user.accountType == "admin") {
        cout << "You are an admin." << endl;
        runAdmin(user);
    } else if (user.accountType == "user") {
        cout << "You are a user." << endl;
    } else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}