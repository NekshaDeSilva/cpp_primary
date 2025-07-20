#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void waitforseconds(int delay =2){
       this_thread::sleep_for(chrono::seconds(delay));
}
int changelocation(string location = "USA"){
    cout << "Searching for " << location << endl;
    srand(0);
    long long int geolocations = 8080900909090774 ;
    return geolocations;
}
int main(){
    string lcation_entered, location_granted;
   cout << "Welcome to weather.com!" << endl;
   waitforseconds();
   cout << "Enter your location so we could be able to show weather in your area." << endl;
    getline(cin,lcation_entered );
    cout << "Your entered, " << lcation_entered << " Checking for the geolocation with GPS..." << endl;
    waitforseconds(rand());
    location_granted = changelocation(lcation_entered);
    cout << "Your location confirmed as " << location_granted << endl;
    
} 


//test cases