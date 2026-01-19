#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    if(s == " ") return true;
    int n = s.length();
    int left = 0;
    int right = n - 1;
    while(left < right) {
        while(left < right && !isalnum(s[left])) left++;
        while(left < right && !isalnum(s[right])) right--;

        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    bool result = isPalindrome(s);
    if(result) {
        cout << "True" << endl;
    } else{
        cout << "False" << endl;
    }

    return 0;
}