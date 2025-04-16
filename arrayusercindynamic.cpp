#include <iostream>
#include <string>
using namespace std;

int main(){
    int element;
    string temp;
    
    cout << "Give number of tasks today: ";
    cin >> element;
    cin.ignore(); //to ignore this previous cin prompt

    string* tasks = new string[element];
    int size = element;

    cout << "Enter your " << element <<" task/s for today or 'q' to quit: " << endl;
    for(int i = 0; i < size; i++){
        cout << i + 1 <<". ";
        getline(cin, temp);
        if(temp == "q"){
            break;
        } else {
            tasks[i] = temp;
        }
    }

    cout << "\nHere is the list of your tasks:" << endl;
    for(int i = 0; i < tasks[i].empty(); i++){
        cout << "- " << tasks[i] << endl;
    }

    return 0;
}