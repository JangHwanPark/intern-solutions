#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(int num) {
        // 숫자를 저장할 벡터 생성
        vector<int> v;

        // num이 0이 될때까지 루프 실행
        while (num > 0) {
            v.push_back(num % 10);
            num = num / 10;
        }

        // 벡터 오름차순 정렬
        // [2, 3, 9, 2] -> [2, 2, 3, 9]
        // [4, 0, 0, 9] -> [0, 0, 4, 9]
        sort(v.begin(), v.end());
        for (int i : v) cout << i << " ";

        /**
         * 2932
         * num1 = 2 * 10 + 3
         * num2 = 2 * 10 + 9
         *
         * 4009
         * num1 = 0 * 10 + 4
         * num2 = 0 * 10 + 9
         */
        return (v[0] * 10 + v[2]) + (v[1] * 10 + v[3]);
    }
};

int main() {
    int num = 2932; // 29 + 23 = 52
    int num1 = 4009; // 4 + 9 = 13
    Solution s;
    cout << s.minimumSum(num);
    cout << "\n";
    cout << s.minimumSum(num1);
    return 0;
}