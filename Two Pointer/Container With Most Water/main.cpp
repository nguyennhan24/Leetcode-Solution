#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int left = 0;
    int right = n - 1;
    int result = 0;
    
    while (left < right) {
        int lowerCol = min(height[left], height[right]);
        result = max(result, (right - left) * lowerCol);
        (height[left] < height[right]) ? left++ : right --;
    }

    return result;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = maxArea(height);

    cout << result << endl;
    return 0;
}