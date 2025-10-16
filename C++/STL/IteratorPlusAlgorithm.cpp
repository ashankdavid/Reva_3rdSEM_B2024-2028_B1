#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {5, 3, 9, 1};
    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for(int x : v) cout << x << " ";

    if(find(v.begin(), v.end(), 3) != v.end())
        cout << "\n3 found!";
}
