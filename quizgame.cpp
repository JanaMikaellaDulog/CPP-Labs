#include <iostream>
using namespace std;

int main(){
    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is C++ originally called?: ",
                          "4. What language was C++ based on?: ",
                          "5. What type of programming language is C++?: "};

    string choices[][3] = {{"a. 1978", "b. 1985", "c. 1989"},
                           {"a. Bjarne Stroustrup", "b. Guido van Rossum", "c. Dennis Ritchie"},
                           {"a. C with OOP", "b. C++", "c. C with Classes"},
                           {"a. Java", "b. C", "c. C#"},
                           {"a. Middle-level", "b. High-level", "c. Low-level"}};
                                                                
    char answerKey[] = {'b', 'a', 'c', 'b', 'a'};
    
    int size = sizeof(questions)/sizeof(questions[0]);
    char answer;
    int score;

    cout << "\n========================" << endl;
    cout << "WELCOME TO A SIMPLE QUIZ" << endl;
    cout << "========================" << endl;

    for(int i = 0; i < size; i++){
        cout << "--------------------------------" << endl;
        cout << questions[i] << endl;

        for(int j = 0; j < sizeof(choices[i])/sizeof(choices[i][0]); j++){
            cout << choices[i][j] << endl;
        }

        cout << "--------------------------------" << endl;

        cin >> answer;
        answer = tolower(answer);

        if(answer == answerKey[i]){
            cout << "That is the correct answer!" << endl;
            score ++;
        } else {
            cout << "Sorry that was incorrect." << endl;
            cout << "Answer was: " << answerKey[i] << endl;
        }
    }

    cout << "--------------------------------" << endl;
    cout << "Thank you for answering this quiz!" << endl;
    cout << "You scored a total of: " << score << "/5 or " << (score/(double)size)*100 << "%\n" << endl;

    return 0;
}