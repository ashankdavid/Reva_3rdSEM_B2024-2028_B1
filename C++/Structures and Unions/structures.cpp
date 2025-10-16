#include<iostream>
#include<cstring>
using namespace std;

struct Student{
    char name[100];
    // string address;
    int srn;
};

int main(){
    struct Student s1;
    struct Student s2;

    // Initializing both s1 and s2 with the values
    strcpy(s1.name, "Abhishek");
    // s1.address = "Bengaluru";
    s1.srn = 123;

    strcpy(s2.name, "David");
    s2.srn = 345;

    
    // printing values of s1 and s2

    cout << "S1 Name is: " << s1.name << endl;
    cout << "S1 SRN: " << s1.srn << endl;

    cout << "S1 Name is: " << s2.name << endl;
    cout << "S1 SRN: " << s2.srn << endl;

    return 0;
}