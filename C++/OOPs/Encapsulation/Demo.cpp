#include<iostream>
using namespace std;

class Student{
    private:
    int marks;
    
    public:
    string name;
    int srn;

    Student(string n, int s, int m){
        name = n;
        srn = s;
        marks = m;
    }

    // getters for marks
    int getMarks(){
        return marks;
    }

    // // setters for marks
    // void setMarks(int marks){
    //     this->marks = marks;
    // }
};

int main(){
    Student s1("Abhishek", 123, 50);
    // s1.setMarks(100);
    cout << s1.getMarks();
    return 0;
}