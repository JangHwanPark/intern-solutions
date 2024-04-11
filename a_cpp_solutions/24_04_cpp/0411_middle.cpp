#include <bits/stdc++.h>
using namespace std;

// factorial
int facto(int n) {
    if (n == 1) return 1;
    return n * facto(n - 1);
}

int main() {
    int n;
    cin >> n;
    //cout << facto(n);
    int res = 1;

    // 10! = 10 * 9 * 8 * 7 ...
    for (int i = 1; i <= n; i++) {
        res *= i;
    }

    cout << res;
    return 0;
}