#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int n) {
    if (arr.size() % 2 == 1) {
        for (int i = 0; i < arr.size(); i += 2) {
            arr[i] += n;
        }
    } else {
        for (int i = 1; i < arr.size(); i += 2) {
            arr[i] += n;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {49, 12, 100, 276, 33};
    vector<int> arr2 = {444, 555, 666, 777};
    int n = 27, n2 = 100;
    solution(arr, n);
    return 0;
}