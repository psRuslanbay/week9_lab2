#include <iostream>
using namespace std;

string rec(int a) {
    if (a < 10) return to_string(a);
    return to_string(a % 10) + rec(a / 10);
}

int main() {
    int a;
    cin >> a;
    cout << rec(a);
    return 0;
}
