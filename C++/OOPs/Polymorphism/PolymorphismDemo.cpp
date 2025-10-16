#include<iostream>
using namespace std;

class India{
    public:
    void capital(){
        cout << "New Delhi" << endl;
    }
};

class USA{
    public:
    void capital(){
        cout << "Washington DC" << endl;
    }
};

int main(){
    India objIND;
    USA objUSA;

    objIND.capital();
    objUSA.capital();
    return 0;
}