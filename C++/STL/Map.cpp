#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> marks;
    marks["Ashank"] = 90;
    marks["David"] = 85;

    for(auto p : marks)
        cout << p.first << " -> " << p.second << endl;
}
