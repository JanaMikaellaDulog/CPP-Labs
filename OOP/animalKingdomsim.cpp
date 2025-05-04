#include <iostream>
using namespace std;

class Animal{
    protected:
        string name;
        int age;

    public:
    Animal(string name, int age){
        this->name = name;
        this->age = age;
    }

    virtual void makeSound(){ //virtual keyword for a placeholder method, one that gets overriden
        cout << "The animal made a sound" << endl;
    }
    
    void displayInfo(){
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    
    }

    virtual ~Animal() {} //virtual destructor for parent class
};

class Dog: public Animal{
    public:

    Dog(string name, int age) : Animal(name, age){

    }
    void makeSound() override { //'override' keyword is optional but good practice to add 
        cout << "The dog barked hi!" << endl;
    }
    void fetch(){
        cout << "Dog is fetching the ball" << endl;
    }
};

class Cat: public Animal{
    public:

    Cat(string name, int age) : Animal(name, age){

    }
    void makeSound() override {
        cout << "The cat meowed hello!" << endl;
    }
    void scratch(){
        cout << "Cat is scratching the scratch pad" << endl;
    }
};

class Bird: public Animal{
    public:

    Bird(string name, int age) : Animal(name, age){

    }
    void makeSound() override {
        cout << "The bird tweeted to greet you!" << endl;
    }
    void fly(){
        cout << "Bird is flying away" << endl;
    }
};


int main(){

    Dog dog("Tookie", 2);
    dog.displayInfo();
    dog.fetch();

    cout << endl;

    Cat cat("Mochi", 4);
    cat.displayInfo();
    cat.scratch();

    cout << endl;

    Bird bird("Ari", 3);
    bird.displayInfo();
    bird.fly();


    return 0;
}