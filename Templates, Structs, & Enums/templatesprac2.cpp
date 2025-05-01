#include <iostream>
#include <utility>
using namespace std;

template <typename T>

pair<T, T> findMinMax(T arr[], int size){
    T max_value = arr[0];
    T min_value = arr[0];

    for(int i = 1; i < size; i++){
        max_value = max(max_value, arr[i]);
        min_value = min(min_value, arr[i]);
    }
        
    return make_pair(max_value, min_value);
}



int main(){
    int size;
    int *ivalues;
    double *dvalues;
    char *cvalues;

    cout << "How many elements would you like?: ";
    cin >> size;

    ivalues = new int[size];
    dvalues = new double[size];
    cvalues = new char[size];

    cout << "Enter " << size << " integers: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> ivalues[i];
    }

    pair<int, int> iresult = findMinMax(ivalues, size);
    
    cout << "Maximum Integer: " << iresult.first << endl;
    cout << "Minimum Integer: " << iresult.second << endl;

    cout << "Enter " << size << " floating point nums: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> dvalues[i];
    }
    
    pair<double, double> dresult = findMinMax(dvalues, size);
    
    cout << "Maximum Float: " << dresult.first << endl;
    cout << "Minimum Float: " << dresult.second << endl;


    cout << "Enter " << size << " Char Values: " << endl;
    for(int i = 0; i < size; i++){
        cout << "#" << i + 1 << ": ";
        cin >> cvalues[i];
    }
    
    pair<char, char> cresult = findMinMax(cvalues, size);
    
    cout << "Maximum Character: " << cresult.first << endl;
    cout << "Minimum Character: " << cresult.second << endl;


    delete[] ivalues;
    delete[] dvalues;
    delete[] cvalues;
    

    return 0;
}


