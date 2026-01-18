#include <bits/stdc++.h>

using namespace std;

string encode(vector<string>& strs) {
    string encoded;

    for(string str: strs) {
        encoded += to_string(str.length()) + "#" + str;
    }

    return encoded;
}

vector<string> decode(string s) {
    vector<string> result;
    int i = 0;
    int n = s.length();
    
    while(i < n) {
        int j = i;

        while(s[j] != '#') {
            j++;
        }

        int length = stoi(s.substr(i, j - i));

        string str = s.substr(j + 1, length);
        result.push_back(str);

        i = j + 1 + length;
    }

    return result;
}


int main() {
    vector<string> input = {"Hello", "World", "5#", ""};
    
    string encoded = encode(input);
    cout << "Encoded: " << encoded << endl;
    
    vector<string> decoded = decode(encoded);
    cout << "Decoded: ";
    for(const string& s : decoded) {
        cout << "[" << s << "] ";
    }
    cout << endl;
    
    return 0;
}