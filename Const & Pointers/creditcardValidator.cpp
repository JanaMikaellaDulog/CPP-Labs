#include <iostream>
using namespace std;

/*
will utilize the Luhn Algorithm

1. Double every second digit from right to left
    if doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. Sum results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid
*/

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);


int main(){
    string cardNumber;
    int result = 0;

    cout << "Enter your Credit Card Number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        cout << "Card Number: " << cardNumber << " is valid" << endl;
    } else {
        cout << "Card is not valid.";
    }

    return 0;
}

int getDigit(const int number){
    // 18 % 10 = 8      18 / 10 = 1 % 10 = 1     8 + 1 = 9 returns 9
    return number % 10 + (number / 10 % 10); // will split doubled with 2 digits
}

int sumOddDigits(const string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int sumEvenDigits(const string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0')* 2); //-0 will give values 0-9
    }

    return sum;
}