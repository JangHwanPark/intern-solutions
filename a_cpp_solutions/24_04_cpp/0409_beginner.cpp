#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector - brute force, O(n^2)
    vector<int> twoSum1(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }

    // hash table (map)
    vector<int> twoSum2(vector<int>& nums, int target) {
        unordered_map<int, int> res;

        for (int i = 0; i < nums.size(); i++) res[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (res.count(temp) && res[temp] != i) {
                return {i, res[temp]};
            }
        }
        return {};
    }
};

int main() {
    vector<int> v = {3,2,4};
    vector<int> v1 = {2,7,11,15};
    int target = 6;
    int target1 = 9;
    Solution s;
    vector<int> res = s.twoSum1(v, target);
    for (auto i : res) cout << "twoSum1: " << i << " ";
    cout << "\n";

    vector<int> res1 = s.twoSum2(v, target);
    for (auto i : res1) cout << "twoSum2: " << i << " ";
    return 0;
}