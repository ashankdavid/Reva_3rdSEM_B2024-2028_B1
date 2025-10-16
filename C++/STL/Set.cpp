#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> s = {3, 1, 2, 2};
    s.insert(5);
    for(int x : s) cout << x << " ";
}
