#include <iostream>
using namespace std;

enum GradeLevel {freshman, sophomore, junior, senior};

GradeLevel convertGradelevel(string gradelevel){
    if (gradelevel == "freshman") return freshman;
    if (gradelevel == "sophomore") return sophomore;
    if (gradelevel == "junior") return junior;
    if (gradelevel == "senior") return senior;

    return freshman;
}

int main(){
    string gradelevel;

    cout << "Enter your Grade Level: ";
    cin >> gradelevel;

    for(auto &c : gradelevel) c = tolower (c);

    GradeLevel grade = convertGradelevel(gradelevel);

    switch(grade){  
        case freshman:  cout << "Freshman - 1st Year" << endl;
                        break;
        case sophomore: cout << "Sophomore - 2nd Year" << endl;
                        break;
        case junior:    cout << "Junior - 3rd Year" << endl;
                        break;               
        case senior:    cout << "Senior - 4th Year" << endl;
                        break;
        default:        cout << "Invalid input" << endl;
                        break;

    }

    return 0;
}