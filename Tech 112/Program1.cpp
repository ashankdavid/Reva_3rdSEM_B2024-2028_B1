#include <iostream>
using namespace std;

class Money {
    int rupee;
    int paisa;

public:
    // Setter methods
    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
    }

    // Getter methods
    int getRupee() {
        return rupee;
    }

    int getPaisa() {
        return paisa;
    }

    // Function to add two Money objects
    Money add(Money m) {
        Money temp;
        temp.rupee = rupee + m.rupee;
        temp.paisa = paisa + m.paisa;

        // Convert paisa to rupees if more than 100
        if (temp.paisa >= 100) {
            temp.rupee += temp.paisa / 100;
            temp.paisa = temp.paisa % 100;
        }

        return temp;
    }

    // Function to display total amount in proper format
    void display() {
        cout << rupee << ".";
        if (paisa < 10)
            cout << "0";  // to print 93.05 instead of 93.5
        cout << paisa << endl;
    }
};

int main() {
    Money m1, m2, sum;
    int r, p;

    // First amount
    cin >> r >> p;
    m1.setRupee(r);
    m1.setPaisa(p);

    // Second amount
    cin >> r >> p;
    m2.setRupee(r);
    m2.setPaisa(p);

    // Add and display result
    sum = m1.add(m2);
    sum.display();

    return 0;
}
