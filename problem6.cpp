#include <iostream>
using namespace std;

int rec(int a) {
    if (a !=0) return 1+rec(a/10);
    return 0;
}

int main() {
    int a;
    cin >> a;
    cout << rec(a);
    return 0;
}
