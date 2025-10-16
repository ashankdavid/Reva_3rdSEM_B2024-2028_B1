#include<iostream>
using namespace std;

class Student{
    private:
    string name; // instance variable
    int srn; // instance variable
    
    public:
    Student(string n, int s){
        name = n;
        srn = s;
    }

    Student(Student &obj){
        name = obj.name;
        srn = obj.srn;
    }

    void printDetails(){
        cout << "Name is: " << name << endl;
        cout << "SRN is: " << srn << endl;
    }
};

int main(){
    Student s1("Abhishek", 123);
    Student s2("David", 345);
    Student s3(s1);
    s1.printDetails();
    s2.printDetails();
    cout << "Copy constructor obj below" << endl;
    s3.printDetails();
    return 0;
}