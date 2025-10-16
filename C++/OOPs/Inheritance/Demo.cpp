#include <iostream>
using namespace std;

class Person {
protected:     // so that Student can access them
    string firstName;
    string lastName;

public:
    Person(string f, string l) {   // constructor for Person
        firstName = f;
        lastName = l;
    }

    void displayPerson() {
        cout << "Name: " << firstName << " " << lastName << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    // Constructor of Student calls constructor of Person
    Student(string f, string l, int r) : Person(f, l) {   // 👈 same as super(f, l)
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();  // call parent function
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1("Ashank", "David", 101);
    s1.displayStudent();
    return 0;
}
