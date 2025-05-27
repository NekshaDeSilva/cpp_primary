#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

// Fixed: Use string for user input, and correct ternary usage
void runTheProgram() {
    cout << "The Ternary operator uses 3 operands to output.\nIt is known as the only operator which uses 3 operands for the output." << endl;
    cout << "int somevalue = 2, someothervalue = 5;\nWhat will this do?\n";
    cout << "if(somevalue > someothervalue) {\n  cout << \"somevalue is higher!\";\n} else {\n  cout << \"somevalue is lower!\";\n}\n";
    cout << "\nYou can write the same if-else in one line using the ternary operator:\n";
    cout << "string response = (somevalue > someothervalue) ? \"Take this 100$\" : \"Give me 100$\";\n";
    cout << "cout << response << \" Buddy!\";\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\nDEMO:\nHey, is 100 > 101? (yes/no): ";
    string user_input;
    getline(cin, user_input);
    if(user_input == "yes" || user_input == "y" || user_input == "YES") {
        cout << "Evaluating your answer!" << endl;
        bool result = 100 > 101;
        if (!result) {
            cout << "The answer should be false because 100 is not higher than 101!" << endl;
        } else {
            cout << "The answer should be true because the expression is true." << endl;
        }
    } else {
        cout << "You chose 'no'. Correct! 100 is not greater than 101." << endl;
    }
}

int main() {
    cout << "Welcome to Neksha DeSilva's C++ Ternary Operator showdown." << endl << endl;
    cout << "Shall we begin? (y/n): ";
    string user_query_1;
    getline(cin, user_query_1);
    string acceptance = (user_query_1 == "y") ? "" : "dis";
    cout << "You " << acceptance << "liked." << endl;
    if (user_query_1 == "y") {
        runTheProgram();
    } else {
        cout << "Thanks for using a program created by me." << endl;
    }
    return 0;
}

//my code
// //The usage of ternary operastor ?: 
// #include <iostream>
// #include <iomanip>
// #include <chrono>
// #include <thread>
// #include <string>

// using namespace std;
// void runTheProgram(const string& eq, int state){
//     void evaluate(const string& statement ){
//      int result = statement;
//      return result; 
//     }
//     int user_query_1, user_query_2,user_query_3;
//     cout << "The Ternary operator uses 3 operands to output.\n it it known as the only operand which uses 3 operands to the output." << endl;
//     cout << "int somevalue, someothervalue;\nsomevalue=2;\nsomeothervalue=5;\n\nWhat will be this >> "<< endl;
//     cout << "if(somevalue>someothervalue){\ncout << \"somevalue is higher than someothervalue, so you're right my buddy! take this 100$\"\n}else{\ncout << \"Somevalue is lower than someothervalue so you are wrong buddy! give me 100$\"" << endl;
//     cout << "\n\n" << endl;
//     this_thread::sleep_for(chrono::seconds(2));
//     cout << "now, let's see this>>>\n-------------------------------------------------------------------------------------------------------" << endl;
//     cout << "You can write the same ifelse conditional statement in one line!\n  int response = (somevalue>someothervalue) ? \"Take this 100$\" :  \"Give me 100$\" ; " << endl;
//     cout << "\n cout << response << \"Buddy!\"" << endl;
//     this_thread::sleep_for(chrono::seconds(1));
//     cout << "real CODE: DEMO:" << endl;
//     cout << "Hey, is 100>101? say yes or no." << endl;
//     getline(cin, user_query_1);
//     cin.ignore();
//     if(user_query_1 == "yes"|| "y"|| "YES" ){
//         cout << "evaluating your answer!" << endl;
//         int user_against= evaluate("100>101");
//         if (user_against == false){
//              cout << "The answer should be false becuase 100 is not higher than 101!" << endl;

//         }else{
//             cout << "The answer should be true! becuase the expression is true;" << endl;

//         }
//     }
//     return 0;
// }
// int main(){
//     cout << "Welcome to Neksha DeSilva's C++ Ternary Operator showdown." << endl;
//     cout << "\n\n" << endl;
//     int user_query_1, user_query_2,user_query_3;
//     cout << "Shall we begin? (y/n)"<< endl;
//     getline (cin, user_query_1);
//     cin.ignore();
//     int acceptance = (user_query_1 =="y") ? "." : "dis";
//     cout << "You " << acceptance << "liked." << endl;
//     if (user_query_1 == "y"){
//         runTheProgram();
//     }else{
//         cout << "Thanks for using a program created by me." << endl;

//     }
//     return 0;
    
// }
