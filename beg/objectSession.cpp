#include <iostream>
#include <iomanip>
using namespace std;

class Account {
public:
    // Personal Details
    string name;
    string address;
    char bloodGroup;
    int age;

    // Bank Details
    string accnumber;
    bool isActive;
    string branch;
    string otpCode;
    double balance;

    void displayCard() {
        cout << "\n==============================\n";
        cout << "|         HSBC BANK           |\n";
        cout << "------------------------------\n";
        cout << "| Name: " << setw(20) << left << name << "|\n";
        cout << "| Address: " << setw(17) << left << address << "|\n";
        cout << "| Blood Group: " << setw(13) << left << bloodGroup << "|\n";
        cout << "| Age: " << setw(19) << left << age << "|\n";
        cout << "| Account #: " << setw(14) << left << accnumber << "|\n";
        cout << "| Branch: " << setw(17) << left << branch << "|\n";
        cout << "| Balance: $" << setw(14) << left << fixed << setprecision(2) << balance << "|\n";
        cout << "==============================\n";
    }
};

int main() {
    Account user;
    user.isActive = true;

    cout << "Hello\n";
    cout << "This is HSBC bank\n";
    cout << "Welcome to the bank\n";

    if (user.isActive) {
        cout << "Your account is active\n";
        cout << "Please enter your name: ";
        getline(cin, user.name);

        cout << "Please enter your address: ";
        getline(cin, user.address);

        cout << "Please enter your blood group (single character): ";
        cin >> user.bloodGroup;

        cout << "Please enter your age: ";
        cin >> user.age;

        cout << "Please enter your account number: ";
        cin >> user.accnumber;

        cout << "Please enter your branch: ";
        cin >> user.branch;

        cout << "Please enter your balance: ";
        cin >> user.balance;

        user.displayCard();
    } else {
        cout << "Your account is not active" << endl;
    }

    return 0;
}