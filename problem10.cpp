#include <algorithm>
#include <iostream>
using namespace std;

string rec(int a) {
    if (a==1) {
        return "1";
    }
    if (a==2) {
        return "2";
    }
    if (a%2==0) {
        return "0"+rec(a/2);
    }
    else if (a%2==1) {
        return "1"+rec(a/2);
    }

    }
int main() {
    int a;
    string s;
    cin >> a;
    s=rec(a);
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
