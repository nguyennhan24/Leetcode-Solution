#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();

    if(n == 0 || n == 1) {
        return n;
    }

    vector<int> lastIndex(128, -1);

    int left = 0;

    int result = 0;

    for(int right = 0; right < n; right++) {
        left = max(left, lastIndex[s[right]] + 1);

        result = max(result, right - left + 1);
        
        lastIndex[s[right]] = right;
    }

    return result;
}

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);

    cout << result << endl;
}

