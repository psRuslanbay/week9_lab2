#include <iostream>
using namespace std;
long combinations(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    return combinations(n - 1, r - 1) + combinations(n - 1, r);
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << combinations(n, r) << endl;
    return 0;
}