#include <iostream>
using namespace std;

int rec(int n, int b=0) {
    if (n==0) return b;
    if (n%10>b) return rec(n/10, n%10);
    else return rec(n/10, b);
}

int main() {
    int a;
    cin >> a;
    cout << rec(a) << endl;
    return 0;
}
