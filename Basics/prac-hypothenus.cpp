#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    //hypotenus formula: c = squareroot of a^2 + b^2
    string input1, input2;
    double a, b, c;

        cout << "Enter value of a (first leg): ";
        cin >> input1;

        cout << "Enter value of b (second leg): ";
        cin >> input2;

    try{
        a = stod(input1);
        b = stod(input2);
    } catch (invalid_argument&) {
        cout << "Invalid input. Enter a valid number." << endl;
    }
    

    double squared = pow(a, 2) + pow(b, 2);
    c = ceil(sqrt(squared) * 100.0) /100.0;
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    cout << "The hypothenus of the right triangle is: " << c;

    

    return 0;
}