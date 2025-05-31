#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void thinkingloop() {
    for (int i = 0; i < 10; i++) {
        cout << "thinking." << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
}

int main() {
    cout << "User: make me an image consisting of 3 polar bears." << endl;
    cout << "ChatGPT: Wait I will create it for you..." << endl;
    for (int i = 0; i < 10; i++) {
        cout << "generating." << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "generating.." << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << "generating..." << endl;
    }
    cout << "ChatGPT: Image created \n [photo-of-polar-bears]" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "User: Thanks, I found this white paper inside my cupboard saying: notice your weight, otherwise you might be too fat! \n\n Should I take care of my health? " << endl;
    thinkingloop();

    cout << "ChatGPT: Exactly, tell me your age, then I'll tell you further details." << endl;
    cout << "What's your age?" << endl;
    int age;
    int user_weight = 0;
    cin >> age;
    cin.ignore();
    thinkingloop();

    bool valid_age = false;
    // Use switch for age ranges
    switch (age / 15) {
        case 1: // 15-29
        case 2: // 30-44
            if (age >= 18 && age <= 30) {
                cout << "ChatGPT: Okay brother, tell me your weight now." << endl;
                user_weight = 10;
                valid_age = true;
            } else if (age >= 31 && age <= 45) {
                cout << "ChatGPT: Okay uncle boomer, let's go through your weight now!" << endl;
                user_weight = 20;
                valid_age = true;
            }
            break;
        case 3: // 45-59
            if (age >= 46 && age <= 60) {
                cout << "ChatGPT: Okay senior uncle, tell me your name, I'll walk with you to a healthy future." << endl;
                user_weight = 30;
                valid_age = true;
            }
            break;
        case 4: // 60-74
        case 5: // 75-89
            if (age >= 61 && age <= 80) {
                cout << "ChatGPT: Oh, grandpa, you're super cool, still concerning about your health! Let's go through this now! \nTell me your weight: ";
                user_weight = 50;
                valid_age = true;
            } else if (age >= 81 && age <= 140) {
                cout << "ChatGPT: I'm sorry super senior sir, my respect to you, \n could you please tell me your honourable weight? I'll help you to live even longer! Long live the king!" << endl;
                user_weight = 60;
                valid_age = true;
            }
            break;
        default:
            break;
    }

    if (!valid_age) {
        cout << "ChatGPT:  I'm sorry, you entered some wrong value. Could you please try again? " << endl;
        return 0;
    }

    int user_actual_weight = 0;
    cout << "Please enter your weight (kg): ";
    cin >> user_actual_weight;
    cin.ignore();
    int user_user_weight = user_actual_weight / user_weight;

    thinkingloop();

    // Use switch for user_user_weight ranges
    switch (user_user_weight) {
        case 0:
        case 1:
            cout << "ChatGPT: Your weight is significantly below the recommended range for your age group. Please consult a healthcare professional as soon as possible." << endl;
            break;
        case 2:
        case 3:
            cout << "ChatGPT: Your weight is a bit low for your age group. Consider a balanced diet and regular checkups." << endl;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            cout << "ChatGPT: Your weight is within a moderate range for your age group. Keep maintaining a healthy lifestyle!" << endl;
            break;
        case 8:
        case 9:
        case 10:
            cout << "ChatGPT: Your weight is a bit above the recommended range. Try to stay active and watch your diet." << endl;
            break;
        default:
            if (user_user_weight > 10)
                cout << "ChatGPT: Your weight is significantly above the recommended range for your age group. Please consider consulting a healthcare professional for advice." << endl;
            else
                cout << "ChatGPT: Your weight is significantly below the recommended range for your age group. Please consult a healthcare professional as soon as possible." << endl;
            break;
    }

    cout << "ChatGPT: Always remember, health is wealth! Take care!" << endl;
    return 0;
}