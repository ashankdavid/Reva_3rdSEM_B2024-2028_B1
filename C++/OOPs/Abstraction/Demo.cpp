#include<iostream>
using namespace std;

class Sum{
    private:
    int num1, num2, total;
    
    public:
    void sum(){
        total = num1 + num2;
        cout << total << endl;
    }
};

int main(){
    Sum obj;
    obj.sum();
    return 0;
}