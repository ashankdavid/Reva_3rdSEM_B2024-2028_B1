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

int main(){
    Animal a;
    Dog d;
    a.eat();
    d.bark();
    d.eat();
    return 0;
}