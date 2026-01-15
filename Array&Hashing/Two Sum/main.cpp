#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mapp;

    for(int i = 0; i < nums.size(); i++) {
        int val = target - nums[i];

        if(mapp.count(val)) {
            return {mapp[val], i};
        }

        mapp[nums[i]] = i;
    }

    return {};
}

int main() {

}