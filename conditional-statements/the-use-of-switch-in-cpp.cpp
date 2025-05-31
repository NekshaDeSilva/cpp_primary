//This is an example of switch statement in conditions.
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
int main(){
    srand(0);

    int mark  = rand()*1;
    cout << "Now we gonna work through the switch method in C++" << endl;
    cout << "Are you ready?" << endl;
    cout << "Teacher: I'm giving you guys your term test marks for the last exam." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Teacher : Number 75795, Your mark is "<< mark << ", please come to me to see your grade" << endl;
    this_thread::sleep_for(chrono::seconds(2));

    cout << "You : My marks is "  << mark << ", and what's my grade Teacher?" << endl;
    //Here, the ifelse comes to rescue you!
    
    char response;
    string response_byanalyze;

    if (mark >= 75) {
        response = 'A';
    } else if (mark >= 65) {
        response = 'B';
    } else if (mark >= 50) {
        response = 'C';
    } else if (mark >= 35) {
        response = 'S';
    } else {
        response = 'F';
    }
        switch (response) {
            case 'A':
                response_byanalyze = "A Grade! Exceptional!";
                break;
            case 'B':
                response_byanalyze = "B Grade! Good job, keep it up!";
                break;
            case 'C':
                response_byanalyze = "C Grade! You passed, but there's room for improvement.";
                break;
            case 'S':
                response_byanalyze = "S Grade! Satisfactory, but work harder next time.";
                break;
            case 'F':
                response_byanalyze = "F Grade! Unfortunately, you failed. Try again!";
                break;
            default: //important : use of the default method here
                response_byanalyze = "Invalid grade.";
                break;
        }
    
    //end
    cout << "Okay student, you can count from now on" << endl;
for(int i = 1; i < 11; i++){
    this_thread::sleep_for(chrono::seconds(1));
    cout << i << endl;
    if(i == 8){
        cout << "You: Teacher, I'm scared!" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Techer: No you aren't keep counting.." << endl;
         this_thread::sleep_for(chrono::seconds(3));
         cout << "You: Okay, techer!" << endl;

    }


}

cout << "Student 75795, " << response_byanalyze << endl;
return 0;
}

