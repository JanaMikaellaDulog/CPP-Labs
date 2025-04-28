#include <iostream>
using namespace std;

template <typename T>

auto findMax(T arr[], int size) {
    T max_value = arr[0];
    for(int i = 1; i < size; i++){
        max_value = max(max_value, arr[i]);
    }
    return max_value;
}

int main(){
    int size;
    int *ivalues;
    double *dvalues;
    char *cvalues;

    cout << "Enter how many numbers you want to compare: ";
    cin >> size;

    ivalues = new int[size];
    dvalues = new double[size];
    cvalues = new char[size];

    cout << "Enter " << size << " integers: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> ivalues[i];
    }
    
    cout << "Maximum Integer: " << findMax(ivalues, size) << endl;

    cout << "Enter " << size << " floating point nums: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> dvalues[i];
    }
    
    cout << "Maximum Float: " << findMax(dvalues, size) << endl;


    cout << "Enter " << size << " Char Values: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> cvalues[i];
    }
    
    cout << "Maximum Char: " << findMax(cvalues, size) << endl;


    delete[] ivalues;
    delete[] dvalues;
    delete[] cvalues;


    return 0;
}

