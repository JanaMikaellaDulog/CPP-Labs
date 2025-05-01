//exercise on using structs and enums together

#include <iostream>
using namespace std;

enum Role {Manager, Developer, Designer, Editor};

struct Employees{
    string name;
    int age;
    Role role;
};


void printEmployeeInfo(Employees &employee);


int main(){
    Employees employees[3] = {
                             {"Jana Dulog", 20, Developer},
                             {"Juls Samaniego", 21, Editor},
                             {"Francine Dalida", 20, Designer}
                             };
    
    cout << "Employee Details:\n" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Employee #" << i + 1 << ": " << endl;
        printEmployeeInfo(employees[i]);
        cout << endl;
    }

    return 0;
}

void printEmployeeInfo(Employees &employee){
    cout << "Name: " << employee.name << endl;
    cout << "Age: " << employee.age << endl;
    cout << "Role: ";

    switch(employee.role){
        case Manager: 
            cout << "Manager" << endl;
            break;
        case Developer: 
            cout << "Developer" << endl;
            break;
        case Designer: 
            cout << "Designer" << endl;
            break;
        case Editor: 
            cout << "Editor" << endl;
            break;
    }   
}