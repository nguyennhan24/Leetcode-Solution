#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;

    for(string str: strs) {
        string key = str;

        sort(key.begin(), key.end());

        map[key].push_back(str);
    }

    vector<vector<string>> result;

    for(auto& mp : map) {
        result.push_back(mp.second);
    }

    return result;
}

int main() {
    // 1. Dữ liệu đầu vào mẫu
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    cout << "Input: ";
    for (const string& s : strs) cout << s << " ";
    cout << "\n-----------------------------\n";

    // 2. Gọi hàm xử lý
    vector<vector<string>> result = groupAnagrams(strs);

    // 3. In kết quả ra màn hình
    cout << "Output (Cac nhom Anagram):" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "Nhom " << i + 1 << ": [ ";
        for (const string& s : result[i]) {
            cout << s << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}