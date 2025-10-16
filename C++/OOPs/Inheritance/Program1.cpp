#include<iostream>
using namespace std;

class Person{
    protected:
    string firstName;
    string lastName;
    
    public:
    Person(string Fn, string Ln){
        firstName = Fn;
        lastName = Ln;
    }
};

class Student : public Person{
    public:
    int srn;
    Student(string Fn, string Ln, int s) : Person(Fn, Ln){
        srn = s;
    }

    void displayDetails(){
        cout << "Name " << firstName << lastName << endl;
        cout << "SRN " << srn << endl;
    }
};

int main(){
    Student s1 ("Ashank", "David", 123);

    return 0;
}

