#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isValidUnit(char unit){
    if (unit == 'F' || unit == 'C' || unit == 'K'){
        return true;
    } else {
        cout << "Invalid Input. Try again.\n" << endl;
        return false;
    }
}




int main(){

    double temp, result;
    char f_unit, t_unit;

    cout << "--------TEMPERATURE CONVERTER---------\n" << endl;

    while (true){
        cout << "TEMPERATURES:" << endl;
        cout << "F - Farenheit" << endl;
        cout << "C - Celsius" << endl;
        cout << "K - Kelvin \n" << endl;

        cout << "Enter FROM convert unit (F/C/K): ";
        cin >> f_unit;
        f_unit = toupper(f_unit);

        if (!isValidUnit(f_unit)){
            continue;
        }

        cout << "Enter temperature: ";
        cin >> temp;
        
        cout << "Enter TO convert unit (F/C/K): ";
        cin >> t_unit;
        t_unit = toupper(t_unit);

        if (!isValidUnit(t_unit)){
            continue;
        }

        if (f_unit == 'F' && t_unit == 'C'){
            result = (temp - 32) * 5.0/9.0;
            cout << temp << " Farenheit = " << result << " Celsius";
        }
        else if (f_unit == 'F' && t_unit == 'K'){
            result = (temp-32)*(5.0/9.0) + 273.15;
            cout << temp << " Farenheit = " << result << " Kelvin";
        }
        else if (f_unit == 'F' && t_unit == 'F'){
            cout << temp << " Farenheit. No Change";
        }
        else if (f_unit == 'C' && t_unit == 'F'){
            result = temp*(9.0/5.0) + 32;
            cout << temp << " Celcius = " << result << " Farenheit";
        }
        else if (f_unit == 'C' && t_unit == 'C'){
            cout << temp << " Celcius. No Change";
        }
        else if (f_unit == 'C' && t_unit == 'K'){
            result = temp + 273.15;
            cout << temp << " Celcius = " << result << " Farenheit";
        }
        else if (f_unit == 'K' && t_unit == 'F'){
            result = (temp-273.15)*(9.0/5.0) + 32;
            cout << temp << " Kelvin = " << result << " Farenheit";
        }
        else if (f_unit == 'K' && t_unit == 'C'){
            result = temp - 273.15;
            cout << temp << " Kelvin = " << result << " Celsius";
        }
        else if (f_unit == 'K' && t_unit == 'K'){
            result = temp - 273.15;
            cout << temp << " Kelvin. No change";
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