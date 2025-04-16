#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    double temp, c, f;
    char unit;

    cout << "--------TEMPERATURE CONVERTER---------\n" << endl;

    while (true){
        cout << "Enter temperature: ";
        cin >> temp;
        
        cout << "Enter FROM convert unit (F/C): ";
        cin >> unit;

        char upperUnit = toupper(unit);

        switch(upperUnit){
            case 'F': 
                c = (temp - 32) * 5.0/9.0;
                cout << "Converted Temperature: " << c << " Celsius";
                break;

            case 'C':
                f = temp*(9.0/5.0) + 32;
                cout << "Converted Temperature: " << f << " Farenheit";
                break;

            default:
                cout << "Invalid Unit. Try again." << endl;
                continue;
        }

        char choice;
        cout << "\n\nExit converter? (Y/N): ";
        cin >> choice;
        cout << endl;

        choice = toupper(choice);
        if (choice == 'Y'){
            break;
        } else {
            continue;
        }

    }

    

    return 0;
}