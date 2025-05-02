#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

class Subjects {
public:
    string sub_name;
    string subIndex;
    int subNumber;
    double marksFrom;
    string gradeFrom;

    void innerFuncRedirectTo_techer() {
        cout << "What is the new subject about? " << endl;
        getline(cin, sub_name);

        cout << "What is the subject index? " << endl;
        getline(cin, subIndex);

        cout << "What is the subject number referring to? " << endl;
        string subNumberStr;
        getline(cin, subNumberStr);
        try {
            subNumber = stoi(subNumberStr);
        } catch (...) {
            subNumber = 0;
        }

        cout << "What is the maximum marks allocated for students? " << endl;
        string marksFromStr;
        getline(cin, marksFromStr);
        try {
            marksFrom = stod(marksFromStr);
        } catch (...) {
            marksFrom = 0.0;
        }

        cout << "What is the maximum grade allocated to join for the students? " << endl;
        getline(cin, gradeFrom);

        cout << "The subject " << sub_name << " is only allocated for students under " << gradeFrom
             << " of age and the maximum marks given will be " << marksFrom
             << " and the index number of the subject is " << subIndex
             << " and the subject number is " << subNumber << endl;

        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "Redirecting you to the confirmation" << endl;
        innerFncLater();
    }

    // asking for the confirmation.
    void innerFncLater() {
        cout << "Do you confirm these details above (yes/no)" << endl;
        string confirmation;
        getline(cin, confirmation);
        if (confirmation == "yes") {
            cout << "The subject has been added successfully" << endl;
        } else if (confirmation == "no") {
            innerFuncRedirectTo_techer();
        }
    }
};

int main() {
    Subjects subj;
    subj.innerFuncRedirectTo_techer();
    cout << "The subject has been added successfully" << endl;
    return 0;
}
// The above code is a C++ program that defines a class `Subjects` with methods to gather information about a subject from the user and confirm the details. The program uses multithreading to simulate a delay before asking for confirmation. The main function creates an instance of the `Subjects` class and calls the method to start the process.