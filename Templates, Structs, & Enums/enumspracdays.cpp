#include <iostream>
using namespace std;

enum Days{sunday, monday, tuesday, wednesday, thursday, friday, saturday};

bool isWeekend(Days day){
    return (day == sunday || day == saturday);
        
}

// Convert string to enum Day
Days stringToDay(const string &day) {
    if (day == "sunday") return sunday;
    if (day == "monday") return monday;
    if (day == "tuesday") return tuesday;
    if (day == "wednesday") return wednesday;
    if (day == "thursday") return thursday;
    if (day == "friday") return friday;
    if (day == "saturday") return saturday;
    
    // Return a default value (throw error or handle invalid input)
    return sunday;  // Default to Sunday if invalid
}


int main(){
    string inputDay;

    cout << "Input a day in a week: ";
    cin >> inputDay;

    for(auto &c : inputDay) c = tolower(c);
    
    Days today = stringToDay(inputDay); // function to convert integer to corresponding day enum

    if(isWeekend(today)){
        cout << "It's a weekend!" << endl;
    } else {
        cout << "It's a weekday" << endl;
    }

    return 0;
}