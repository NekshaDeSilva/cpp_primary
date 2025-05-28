#include <iostream>
#include <string>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

// Function to evaluate and print the result of a hardcoded expression
int evaluateExpression(const string& exp, int result) {
    cout << "\nEvaluating: " << exp << endl;
    cout << "Result: " << result << endl;
    return result;
}

// Function to check user's answer
void checkAnswer(int userAnswer, int correctAnswer) {
    cout << "Evaluating your answer..." << endl;
    if (userAnswer == correctAnswer) {
        cout << "✅ Correct!" << endl;
    } else {
        cout << "❌ Incorrect. The correct answer is: " << correctAnswer << endl;
    }
}

void countdown(int seconds) {
    for (int i = seconds; i > 0; i--) {
        cout << i << " second(s) left..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

// Corrected associativity demonstration function
void exectuteTheAssociativity() {
    cout << "Demonstrating Left to Right Associativity:\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    string eq = "4 - 8 + 10 + 3"; // fixed assignment issue
    cout << eq << " ?" << endl;
    cout << "Enter your answer: ";
    int user_ans;
    cin >> user_ans;
    // Evaluate expression according to C++
    int correct = 4 - 8 + 10 + 3;
    evaluateExpression(eq, correct);
    checkAnswer(user_ans, correct);
    // Clear the input buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    cout << "Welcome to the C++ Operator Precedence Demo!\n";
    cout << "You'll see some expressions. Try to guess their result before time runs out.\n";

    struct Question {
        string expr;
        int answer;
        string hint;
    };

    Question questions[] = {
        {"8 * (8 / 4) / 2 + 4", 12, "Multiplication, division, and addition. Parentheses first."},
        {"8 ^ 3 + 2 * 4 - 2 * 4", (8 ^ 3) + 2 * 4 - 2 * 4, "Bitwise XOR, then multiplication, then addition/subtraction."},
        {"~4 & 2 * 2 + 10", (~4) & (2 * 2 + 10), "Bitwise NOT, multiplication, addition, then bitwise AND."},
        {"~1 * 100 + (~1) ^ 6 ^ 5", (~1) * 100 + ((~1) ^ 6 ^ 5), "Bitwise NOT, multiplication, bitwise XOR, then addition."}
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < numQuestions; ++i) {
        cout << "\n---------------------------------------------\n";
        cout << "Question " << (i + 1) << ": What is the result of: " << questions[i].expr << " ?" << endl;
        cout << "Hint: " << questions[i].hint << endl;
        cout << "You have 10 seconds to think...";
        cout.flush();
        countdown(10);

        int userAnswer;
        cout << "Enter your answer: ";
        cin >> userAnswer;
        checkAnswer(userAnswer, questions[i].answer);
        evaluateExpression(questions[i].expr, questions[i].answer);

        // Clear input buffer (to prepare for next getline, if any)
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "Your responses have been recorded." << endl;
    cout << "\nThanks for playing! Review the results and try changing the expressions to experiment with operator precedence in C++.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Get Ready to taste the Associativity of Operators." << endl;
    cout << "Are you ready? (y/n)" << endl;
    string ans_rightafter22;
    getline(cin, ans_rightafter22);
    if(ans_rightafter22 == "y" || ans_rightafter22 == "Y") {
        exectuteTheAssociativity();
    } else {
        cout << "\n\n Thanks for playing the game. Let's go deeper when your mind changes!" << endl;
    }
    return 0;
}


