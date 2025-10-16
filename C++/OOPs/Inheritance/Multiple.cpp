#include<iostream>
using namespace std;

class Mom{
    public:
    void cook(){
        cout << "Cooking" << endl;
    }
};

class Dad{
    public:
    void cook(){
        cout << "Cooking" << endl;
    }
};

class Child : public Mom, public Dad{
    public:
    void study(){
        cout << "Studying..." << endl;
    }
};

int main(){
    Child c;
    c.Mom::cook();
    c.Dad::cook();
    c.study();
    return 0;
}