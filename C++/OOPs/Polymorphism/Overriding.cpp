#include<iostream>
using namespace std;

// Run-time polymorphism
class Mom{
    public:
    void cook(){
        cout << "Indian Food" << endl;
    }
};

class Daughter : public Mom{
    public:
    void cook(){
        cout << "Chinese Food" << endl;
    }
};

int main(){
    Mom m;
    Daughter d;
    m.cook();
    d.cook();
    return 0;
}