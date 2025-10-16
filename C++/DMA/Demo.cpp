#include<iostream>
using namespace std;

int main(){
    int i = 50;
    int *ptr = &i;
    // cout << i << endl; // 50
    // cout << ptr << endl; // address of i (Hexa Decimal)
    // cout << *ptr << endl; // 50
    // ptr = (int*) malloc(5*sizeof(int)); ?// (Legacy)
    ptr = new int[20];

    for(int i=0; i<5; i++){
        cin >> ptr[i];
    }

    for(int i=0; i<5; i++){
        cout << ptr[i];
    }

    free(ptr);
    ptr = nullptr;
    return 0;
}