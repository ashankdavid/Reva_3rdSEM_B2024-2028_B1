#include<iostream>
using namespace std;

// Compile time polymorphism
class Addition{
    public:
    int add(int a, int b){
        return a+b;
    }

    int add(int a, int b, int c){
        return a+b+c;
    }
};

int main(){
    Addition obj;
    obj.add(1,2);
    obj.add(1,2,3);
    return 0;
}