#include <iostream>
using namespace std;

int rec(int n) {
    if (n<=0) return 0;
    else if (n%2==0) return n+rec(n-2);
    else if (n%2!=0) return n+rec(n-1);

}

int main() {
    int a;
    cin >> a;
    cout << rec(a) << endl;
    return 0;
}
