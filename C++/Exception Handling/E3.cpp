#include<iostream>
using namespace std;

int main(){
    try {
        throw 1.2;
    }catch(int e){
        cout << "Integer Exception Caught!..." << endl;
    }catch(...){
        cout << "Some unknown exception occuered!" << endl;
    }
    return 0;
}