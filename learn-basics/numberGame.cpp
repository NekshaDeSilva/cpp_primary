#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Question {
public:
    string questionTitle;
    string questionAns;
    string type;

    Question(string questionTitle, string questionAns, string type) {
        this->questionTitle = questionTitle;
        this->questionAns = questionAns;
        this->type = type;
    }
};

int main() {
    string usrname;
    string typeAuth;
    vector<Question> questions;

    cout << "Hello, This is The first C++ Project implemented by Neksha DeSilva" << "\n" << "How should we call you?" << endl;
    getline(cin, usrname);
    cout << "Hey " << usrname << "! \n" << "Let's start the quiz!" << endl;
    cout << "Enter the password.. (If you're a user, just type anything to continue.): ";
    getline(cin, typeAuth);

    if (typeAuth == "admin") {
        string temp_answername, temp_answerans, temp_anstype;
        cout << "Welcome admin, Let's create questions!\n\t" << endl;

        while (true) {
            cout << "What is the type of question? (Mathematics / Physics, or type 'stop' to finish)\n\t" << endl;
            getline(cin, temp_anstype);
            if (temp_anstype == "stop") break;

            cout << "What is the question you're gonna ask?\n\t" << endl;
            getline(cin, temp_answername);
            cout << "What is the answer for that question?\n\t" << endl;
            getline(cin, temp_answerans);

            questions.push_back(Question(temp_answername, temp_answerans, temp_anstype));
            cout << "New " << temp_anstype << " question created: \n\n DEMO: " << temp_answername << "?  \n" << "CORRECT ANSWER: " << temp_answerans << endl;
        }
    } else {
        string preferredType;
        int correct = 0, numberofquestionsasked = 0;

        cout << "Hello " << usrname << "! Let's start now! \n\n";
        cout << "What is your preferred question type? (Mathematics / Physics)" << endl;
        getline(cin, preferredType);

        for (const Question &q : questions) {
            if (q.type == preferredType) {
                string userAnswer;
                cout << q.questionTitle << "? ";
                getline(cin, userAnswer);

                if (userAnswer == q.questionAns) {
                    correct++;
                }
                numberofquestionsasked++;
            }
        }

        if (numberofquestionsasked > 0) {
            cout << "Great! You have scored " << (correct * 100) / numberofquestionsasked << "% from " << numberofquestionsasked << " questions asked." << endl;
        } else {
            cout << "No questions found for your selected topic!" << endl;
        }

        cout << "Thanks for attempting the quiz. Wish you all the best!" << endl;
    }

    return 0;
}
