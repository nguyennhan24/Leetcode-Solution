#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> result;

    for(int i = 0; i < n; i++) {

        if(result.count(nums[i])) {
            return true;
        } else{
            result.insert(nums[i]);
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    bool result = containsDuplicate(arr);

    if(result) {
        cout << "True";
    } else{
        cout << "False";
    }
}