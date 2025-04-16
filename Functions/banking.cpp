#include <iostream>
#include <string>
#include <iomanip>
#include <limits> //for limits sa cin.ignore
using namespace std;

void showBalance(double balance){
    cout << "You're total balance is: $" << std::setprecision(2) << std::fixed << balance <<"\n"<< endl;
}
double deposit(){
    double amount = 0;
    
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    } else {
        cout << "That's not a valid amount " << endl;
        return 0;
    }

}
double withdraw(double balance){
    double amount = 0;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if(amount < 0){
        cout << "That's not a valid amount " << endl;
        return 0;
    } 
    else if(amount > balance){
        cout << "Insufficient funds" << endl;
        return 0;
    }
    else {
        return amount;
    }
}


int main(){
    double balance = 0; 
    int choice;

    do{
        cout << "------Welcome to a simple Banking Program------\n" << endl;

    cout << "What would you like to do?" << endl;
    cout << "CHOICES:" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit\n" << endl;

    cout << "Enter choice: ";
    std::cin >> choice; //must have std::cin for input validation to work
    
    //used to handle invalid user input
    std::cin.clear(); // clears error
    fflush(stdin); //flushes or removes data in input

    /*
    Can do this too. have to import <limits> tho
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }*/

    switch (choice){
        case 1: balance += deposit();
                showBalance(balance);
                break;
        case 2: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 3: showBalance(balance);
                break;
        case 4: cout << "Thanks for using this program" <<endl;
                break;
        default: cout << "Invalid choice" << endl;
    }

    } while (choice!=4);

    




    return 0;
}