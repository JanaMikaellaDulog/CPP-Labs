#include <iostream>
#include <cmath>
using namespace std;

double add(double num1, double num2){
    return num1 + num2;
}
double sub(double num1, double num2){
    return num1 - num2;
}
double mul(double num1, double num2){
    return num1 * num2;
}
double div(double num1, double num2){
    return num1 / num2;
}
double mod(double num1, double num2){
    return fmod(num1, num2);
}

double isValidNum (){
    double num;
    while (true) {
    
        cout << "Enter A Number: ";
        cin >> num;
        
        if (cin.fail()){ // cin.fail is used for data type handling
            cin.clear(); // clears error flag and cin buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore invalid input
            cout << "\nInvalid Input. Please enter a valid number \n" << endl;
        } else {
            return num;
        }
    }
    
}

int main(){

cout << "SIMPLE CALCULATOR" << endl;
cout << "==================" << endl;
double number1 = isValidNum();
char op;

while (true) {
    cout << "Choose Operator (+, -, *, /, %) or 'q' to quit: ";
    cin >> op;

    if (op == 'q' || op == 'Q'){
        cout << "Final Result: " << number1 << endl;
        break;
    }
    else if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')){
        cout << "\nInvalid Input. Please enter a valid operator \n" << endl;
        continue;
    }   

    double number2 = isValidNum();

    switch(op){
        case '+': {
            auto result = add(number1, number2);
            number1 = result;
        }
        break;

        case '-': {
            auto result = sub(number1, number2);
            number1 = result;
        }
        break;

        case '*': {
            auto result = mul(number1, number2);
            number1 = result;
        }
        break;

        case '/': {
            if(number2 == 0){
                cout << "Error! Division by zero is not allowed. \n" << endl;
                continue;
            } else {
                auto result = div(number1, number2);
                number1 = result;
                }
            }
            
        break;

        case '%': {
            auto result = mod(number1, number2);
            number1 = result;
        }
        break;
        
        default: {
            break;
        }
        
    }
    cout << "Result: " << number1 << endl;
    
    }
    return 0;
}
    
