#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main(){
        char tryChoice;
        char player;
        char computer;
    do{
        player = getUserChoice();
        computer = getComputerChoice();
    
        cout << "Your choice: ";
        showChoice(player);
    
        cout << "Computer's choice: ";
        showChoice(computer);
    
        showWinner(player, computer);

        while (true){
            cout << "Play again? (Y/N): ";
            cin >> tryChoice;
            tryChoice = toupper(tryChoice);

            if (tryChoice != 'Y' && tryChoice != 'N'){
                cout << "Invalid Choice. Try again." << endl;
                continue;
            } else {
                break;
            }
        }  

    } while (tryChoice != 'N');
            
    return 0;
}

char getUserChoice(){
    char player;
    cout << "---- ROCK, PAPER, SCISSORS GAME ----\n" << endl;

    do{
        cout << "Choose an action" << endl;
        cout << "'r' : Rock" << endl;
        cout << "'p' : Paper" << endl;
        cout << "'s' : Scissors" << endl;
        cin >> player;

        player = tolower(player);

    } while (player != 'r' && player != 'q' && player != 's');

    return player;
}
char getComputerChoice(){
    char computer;

    srand(time(NULL));
    computer = rand() % 3 + 1;

    switch(computer){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return computer;
}
void showChoice(char choice){
    
    switch(choice){

        case 'r':
            cout << "Rock" << endl;
            break;
        case 'p':
            cout << "Paper" << endl;
            break;
        case 's':
            cout << "Scissors" << endl;
            break;
    }
}

void showWinner(char player, char computer){

    switch (player){
        case 'r':   if(computer == 'r'){
                        cout << "Its a tie!" << endl;
                    }
                    else if (computer == 'p'){
                        cout << "Computer Wins!" << endl;
                    }
                    else {
                        cout << "You Win!" << endl;
                    }
                    break;
 
        case 'p':   if(computer == 's'){
                        cout << "Computer Wins!" << endl;
                    }
                    else if (computer == 'p'){
                        cout << "Its a tie!" << endl;
                    }
                    else {
                        cout << "You Win!" << endl;
                    }
                    break;

        case 's':   if(computer == 's'){
                        cout << "Its a tie!" << endl;
                    }
                    else if (computer == 'p'){
                        cout << "You Win!" << endl;
                    }
                    else {
                        cout << "Computer Wins!" << endl;
                    }
                    break;
        }
}