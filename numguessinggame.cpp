#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num, guess, tries;
    int triesLimit = 5;

    srand(time(NULL));
    num = rand() % 20 + 1;

    cout << "--------NUMBER GUESSING GAME---------\n" << endl;
    cout << "You get 5 tries." << endl;

    do {
        cout << "Enter a guess between (1-20): ";
        cin >> guess;
        tries ++;

        if(guess == num && tries <= triesLimit){
            cout << "Congrats! The number you guessed: "  << guess << " is the correct number!" << endl;
            cout << "It took you: " << tries << " tries" << endl;
            break;
        } 
        else if(guess > num && tries <= triesLimit){
            cout << "The number you guessed is too high. Try again" << endl;
        }
        else if(guess < num && tries <= triesLimit){
            cout << "The number you guessed is too low. Try again" << endl;    
        } else {
            cout << "Sorry, you have ran out of tries." << endl;
        }
    } while(guess!=num);


    return 0;
}