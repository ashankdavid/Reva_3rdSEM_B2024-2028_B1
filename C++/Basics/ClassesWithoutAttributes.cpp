#include<iostream>
using namespace std;

class Hello{
    public:
    static void printHello(){
        cout << "hello world" << endl;
    }

    void Hii(){
        cout << "HII" << endl;
    }
};

int main(){
    Hello::printHello();
    Hello obj; // obj creation
    obj.Hii();
    return 0;
}