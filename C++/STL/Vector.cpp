#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.push_back(40);

    cout << "Vector elements: ";
    for(int i : v) cout << i << " ";
    cout << "\nSize: " << v.size();
}
