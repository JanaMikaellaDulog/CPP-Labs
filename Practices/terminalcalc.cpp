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

int main(){

double number1, number2;
char op;

while (true) {
    cout << "SIMPLE CALCULATOR" << endl;
    cout << "==================" << endl;

    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Second Number: ";
    cin >> number2;
    
    if (cin.fail()){ // cin.fail is used for data type handling
        cin.clear(); // clears error flag and cin buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore invalid input
        cout << "\nInvalid Input. Please enter a valid number \n" << endl;
    } else {
        break; //valid yung input
    }
}

while (true) {
    cout << "Choose Operator (+, -, *, /, %): ";
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%'){
        break;
    } else {
        cout << "Invalid Input. Please enter a valid operator" << endl;
    }
}


auto sum = add(number1, number2);
auto dif = sub(number1, number2);
auto pro = mul(number1, number2);
auto quo = div(number1, number2);
auto rem = mod(number1, number2);

switch (op){

    case '+': {
        cout << number1 << " + " << number2 << " = " << sum << endl;
    }
    break;

    case '-': {
        cout << number1 << " - " << number2 << " = " << dif << endl;
    }
    break;

    case '*': {
        cout << number1 << " * " << number2 << " = " << pro << endl;
    }
    break;

    case '/': {
        cout << number1 << " / " << number2 << " = " << quo << endl;;
    }
    break;

    case '%': {
        cout << number1 << " % " << number2 << " = " << rem << endl;;
    }
    break;
    
    default: {
        cout << "Not a valid Operator" << endl;
    }
    break;
}

    while (true) {
        char choice;
        cout << "Use Calculator Again? (Y/N): " << endl;
        cin >> choice;

        char upperchoice = toupper(choice);

        if (upperchoice == 'Y'){
            main();
        } else {
            break;
        }
    }

    return 0;
}