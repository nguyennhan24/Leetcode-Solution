#include <bits/stdc++.h>

using namespace std;

int trap(vector<int>& height) {
    int result = 0;
    int n = height.size();

    int left = 1;
    int right = n - 2;

    int lMax = height[left - 1];
    int rMax = height[right + 1];
    while(left <= right) {
        if(lMax <= rMax) {
            result += max(0, lMax - height[left]);

            lMax = max(lMax, height[left]);
            left++;
        } else {
            result += max(0, rMax - height[right]);

            rMax = max(rMax, height[right]);

            right--;
        }
    }
    
    return result;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int result = trap(height);

    cout << result << endl;

    return 0;

}