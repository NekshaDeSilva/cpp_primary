#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

class Student {
public:
    string name;
    string birthDate;
    string address;
    string qualification;
    void innerFunc() {
        cout << "Hello, This is X College student registration system" << endl;
        cout << "Please enter your name: ";
        getline(cin, name);
        cout << "Please enter your birth date: ";
        getline(cin, birthDate);
        cout << "Please enter your qualification: ";
        getline(cin, qualification);
        cout << "Please enter your address: ";
        getline(cin, address);
    }
};

class Classes {
public:
    string className;
    string classTeacher;
    string subject;
    string maxGPA;
    void innerFunc() {
        cout << "Please enter your class name: ";
        getline(cin, className);
        cout << "Please enter your class teacher: ";
        getline(cin, classTeacher);
        cout << "Please enter your subject: ";
        getline(cin, subject);
        cout << "Please enter your max GPA: ";
        getline(cin, maxGPA);
    }
};

int main() {
    srand(time(0));
    int variable_TRUSTsCORE = rand() % 1000 + 1;
    int variable_StudentID = rand() % 5387457 + 1;
    string takingClass;

    cout << "Welcome to X College." << endl;
    cout << "The College trusted by more than " << variable_TRUSTsCORE << "+ students." << endl;
    cout << "Are you ready to take a seat in our university?" << endl;

    Student student1;
    student1.innerFunc();

    cout << "Your name is: " << student1.name << endl;
    cout << "Your birth date is: " << student1.birthDate << endl;
    cout << "Your qualification is: " << student1.qualification << endl;
    cout << "Your address is: " << student1.address << endl;
    cout << "Your student ID is: " << variable_StudentID << endl;

    cout << "Are you ready to take a class now? (yes/no): ";
    getline(cin, takingClass);

    Classes class1;
    if (takingClass == "yes") {
        class1.innerFunc();
    } else {
        cout << "Okay, let us know how we can help you to select a class." << endl;
        class1.innerFunc();
    }

    cout << "Class Name: " << class1.className << endl;
    cout << "Class Teacher: " << class1.classTeacher << endl;
    cout << "Subject: " << class1.subject << endl;
    cout << "Max GPA: " << class1.maxGPA << endl;

    return 0;
}