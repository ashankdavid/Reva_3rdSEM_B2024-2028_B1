#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating...." << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking..." << endl;
    }
};

class Puppy : public Dog{
    public:
    void cry(){
        cout << "Crying.." << endl;
    }
};

int main(){
    Animal a;
    Dog d;
    Puppy p;
    a.eat();
    d.bark();
    d.eat();
    return 0;
}