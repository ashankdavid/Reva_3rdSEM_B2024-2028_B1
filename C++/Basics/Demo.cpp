#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(){
        cout << "I'm a constructor!" << endl;
    }
    ~Demo(){
        cout << "I'm a Destructor!" << endl;
    }
};

int main(){
    Demo obj1;
    Demo obj2;
    return 0;
}