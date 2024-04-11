#include <bits/stdc++.h>
using namespace std;
int n, m, sum;
int main() {
    cin >> n >> m;
    int k[m];

    for (int i = 0; i < m; i++) {
        cin >> k[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; ++j) {
            if (i % k[j] == 0) {
                sum += i;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}