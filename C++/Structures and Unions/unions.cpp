#include<iostream>
#include<cstring>
using namespace std;

union Student{
    char name[100];
    // string address;
    int srn;
};

int main(){
    union Student s1;
    union Student s2;

    // Initializing both s1 and s2 with the values
    strcpy(s1.name, "Abhishek");
    cout << "S1 Name is: " << s1.name << endl;
    // s1.address = "Bengaluru";
    s1.srn = 123;
    cout << "S1 SRN: " << s1.srn << endl;

    strcpy(s2.name, "David");
    cout << "S1 Name is: " << s2.name << endl;
    s2.srn = 345;
    cout << "S1 SRN: " << s2.srn << endl;
    
    // printing values of s1 and s2

    
    

    
    

    return 0;
}