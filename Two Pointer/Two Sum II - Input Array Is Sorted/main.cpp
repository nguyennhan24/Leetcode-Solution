#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int n = numbers.size();
    int right = n - 1;

    while(left < right){
        if(numbers[left] + numbers[right] > target) {
            right--;
        } else if(numbers[left] + numbers[right] < target) {
            left++;
        } else{
            return {++left, ++right};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}