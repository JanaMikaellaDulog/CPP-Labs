#include <iostream>
using namespace std;

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;

    Cube(double side){
        this->side = side;
        this->area = (side*side) * 6;
        this->volume = side*side*side;
    }


};

class Sphere : public Shape{
    public:
        double radius;
    
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius*radius);
        this->volume = (4/3.0) * 3.14159 * (radius*radius*radius);
    }
};

void calcCube(Cube &cube){
    cout << "AREA & VOLUME OF CUBE: " << endl;
    cout << "Area: " << cube.area << "cm²" << endl;
    cout << "Volume: " << cube.volume << "cm³" << endl;
}

void calcSphere(Sphere &sphere){
    cout << "AREA & VOLUME OF SPHERE: " << endl;
    cout << "Area: " << sphere.area << "cm²" << endl;
    cout << "Volume: " << sphere.volume << "cm³" << endl;
}

int main(){
    int choice;
    double side;
    double radius;
    char again;

    cout << "\n==============================" << endl;
    cout << "SHAPE AREA & VOLUME CALCULATOR" << endl;
    cout << "==============================\n" << endl;

    do{
        cout << "What shape do you want to calculate area & volume for?: " << endl;
        cout << "1. Cube" << endl;
        cout << "2. Sphere" << endl;
        cin >> choice;

        cout << endl;
    
        switch(choice){
            case 1: {   
                cout << "CUBE: " << endl;
                cout << "Enter length of side : ";
                cin >> side;
                Cube cube(side);
                cout << endl;
                calcCube(cube);
                break;
            }
            
            case 2: {
                cout << "SPHERE: " << endl;
                cout << "Enter radius : ";
                cin >> radius;
                Sphere sphere(radius);
                cout << endl;
                calcSphere(sphere);
                break;
            } 
            default: {
                cout << "Invalid choice! Try again" << endl;
                break;
            }
        }

        cout << "\nUse calc again? (Y/N): ";
        cin >> again;
        again = toupper(again);


    } while (again == 'Y');
   

   

    return 0;
}