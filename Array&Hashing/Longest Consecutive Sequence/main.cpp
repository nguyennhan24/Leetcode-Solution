#include<bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> map(nums.begin(), nums.end());
    int count = 0;

    for(int num : map) {
        if(map.find(num - 1) == map.end()) {
            int curr = num;
            int length = 1;

            while(map.find(curr + 1) != map.end()) {
                length++;
                curr++;
            }

            count = max(length, count);
        }
    }

    return count;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = longestConsecutive(nums);

    cout << result << endl;

    return 0;
}