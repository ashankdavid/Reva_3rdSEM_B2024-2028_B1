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

class Cat : public Animal{
    public:
    void meow(){
        cout << "Meowing.." << endl;
    }
};

int main(){
    Animal a;
    Dog d;
    Cat c;
    a.eat();
    d.bark();
    d.eat();
    c.eat();
    c.meow();
    return 0;
}