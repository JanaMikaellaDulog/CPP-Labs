#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    int numStudents;

    cout << "Enter number of students (max 10): ";
    cin >> numStudents;

    string names[10];
    double grades[10];

    for (int i = 0; i < numStudents; i++){
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter grade of " << names[i] << ": ";
        cin >> grades[i];
    }

    cout << "--- Student Grades ---" << endl;
    for(int i = 0; i < numStudents; i++){
        cout << names[i] << ": " << grades[i] << endl;
    }
    cout << endl;

    //Average
    double sum {0};
    for(double element : grades){
        sum += element;
    }
    double ave = sum / numStudents;
    double roundAve = round(ave * 100) / 100;
    cout << "Average Grade: " << roundAve << endl;

    //Highest Grade
    double maxGrade = grades[0];
    string topStudent = names[0];

    for(int i = 1; i < numStudents; i++){
        if(grades[i] > maxGrade){
            maxGrade = grades[i];
            topStudent = names[i];
        }
    }
    cout << "Highest Grade: " << topStudent << " (" << maxGrade << ")" << endl;
    

    //Lowest Grade
    double lowGrade = grades[0];
    string bottomStudent = names[0];

    for(int i = 1; i < numStudents; i++){
        if(grades[i] < lowGrade){
            lowGrade = grades[i];
            bottomStudent = names[i];
        }
    }
    cout << "Lowest Grade: " << bottomStudent << " (" << lowGrade << ")" << endl;

}
