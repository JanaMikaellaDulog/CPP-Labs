#include <iostream>
#include <limits.h> //for INT_MIN - starting at the lowest possible integer
using namespace std;

int main(){
    //Reversing an array
    /*
    int elements;
    
    cout << "Enter number of elements: ";
    cin >> elements;

    int* array = new int[elements];

    cout << "Enter " << elements << " numbers (seperated with space):";
    for(int i = 0; i < elements; i++){
        cin >> array[i];
    }
    //display input arrays:
    cout << "Input elements: ";
    for(int i = 0; i < elements; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    //display reversed array:
    cout << "Reversed Array: ";
    for(int i = elements - 1; i >= 0; i--){
        cout << array[i] << " ";
    }*/

    cout << endl;
    cout << "/-------------------------/ \n" << endl;

    int elem;

    cout << "Enter number of elements: ";
    cin >> elem;

    int* array1 = new int[elem]; //pag gamit na pala toh ng concept of pointers, allocating memory at runtime. this symbol [*]

    cout << "Enter " << elem << " Numbers:";
    for(int i = 0; i < elem; i++){
        cin >> array1[i];
    }

    int largest = INT_MIN; // to start at the smallest int value
    int second_largest = INT_MIN;

    for (int i = 0; i < elem; i++){
        if(array1[i] > largest){ 
            second_largest = largest; 
            largest = array1[i];
        } else if (array1[i] > second_largest && array1[i] != largest){
            second_largest = array1[i];
        }
    }
    //notes: IF STATEMENT: when the value of array[i] is greater than largest(which is the lowest int), the value of largest is stored to second_largest and the value of array[i] that was prev greater than largest will get stored to largest.
    //ELSE IF: when the value of array[i] is greater than second_largest and it is not equal to largest, the value of array[i] is stored to second_largest. (for smaller num comparisons)

    if(second_largest == INT_MIN){
        cout << "No second largest number found" << endl;
    } else {
        cout << "The second largest number: " << second_largest << endl;
        cout << "The largest number: " << largest << endl; //for check ko lang
    }
    
    return 0;
}