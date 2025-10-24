#include <iostream>
#include <cmath>
using namespace std;

int rec(int n, int m=2) {
    if (m>sqrt(n)) {
        return true;
    }
    if (n%m==0) {
        return false;
    }
    return rec(n, m+1);

}

int main() {
    int a;
    cin >> a;
    cout << rec(a) << endl;
    return 0;
}
