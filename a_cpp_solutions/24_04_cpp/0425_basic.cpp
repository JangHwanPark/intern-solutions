#include <bits/stdc++.h>
using namespace std;
int n, f, res;
int main() {
    cin >> n >> f;

    // N의 뒤 두 자리를 00으로 만들기
    int temp = (n / 100) * 100;

    while(true) {
        // 나머지가 0인 경우, 뒤 두 자리 출력
        if (temp % f == 0) {
            res = temp % 100;
            cout << setfill('0') << setw(2) << res << "\n";
            break;
        }
        temp++;
    }
}