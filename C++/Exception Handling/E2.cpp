#include<iostream>
using namespace std;

int main(){
    try{
        int age;
        cout << "Enter age: ";
        cin >> age;

        if(age < 0){
            throw "Negative Age";
        }else if(age < 18){
            throw age;
        }else{
            cout << "You are eligible to vote!";
        }
    }catch(const char* msg){
        cout << "Error: " << msg << endl;
    }catch(int e){
        cout << "Error: Age is too low" << endl;
    }
    return 0;
}