#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two nums: ";
    cin >> a >> b;

    try{
        if(b==0){
            throw b;
        }
        cout << a/b << endl;
    }catch(int e){
        cout << "You can't divide a num by Zero" << endl;
    }
    cout << "And the program continues" << endl;
    return 0;
}