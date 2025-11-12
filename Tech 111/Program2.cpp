#include <iostream>
using namespace std;

class Loan {
public:
    // Overloaded function for Education Loan
    void loadCalc(float amount, int year, float interest) {
        float totalAmount;
        if (year > 4) {
            float interestAmount = (amount * interest) / 100;
            totalAmount = amount + interestAmount;
        } else {
            totalAmount = amount; // no interest
        }

        cout << "Amount with interest " << totalAmount << endl;
        cout << "Monthly amount to be paid: " << totalAmount / (year * 12) << endl;
    }

    // Overloaded function for Gold Loan
    void loadCalc(float amount, float interest) {
        float interestAmount = (amount * interest) / 100;
        float totalAmount = amount + interestAmount;

        cout << "Amount with interest " << totalAmount << endl;
        cout << "Monthly amount to be paid: " << totalAmount / 12 << endl;
    }
};

int main() {
    int choice;
    cout << "Enter 1 for Education Loan, 2 for Gold Loan: ";
    cin >> choice;

    Loan l;

    if (choice == 1) {
        float amount, interest;
        int year;
        cin >> amount >> year >> interest;
        l.loadCalc(amount, year, interest);
    } else if (choice == 2) {
        float amount, interest;
        cin >> amount >> interest;
        l.loadCalc(amount, interest);
    } else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}
