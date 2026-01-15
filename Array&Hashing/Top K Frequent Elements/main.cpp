#include <bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    for(int val: nums) {
        map[val]++;
    }

    priority_queue<pair<int, int>,
    vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for(pair<int, int> entry : map) {

        pq.push({entry.second, entry.first});

        if(pq.size() > k) {
            pq.pop();
        }
    }

    vector<int> result(k);

    for(int i = k - 1; i >= 0; i--) {
        result[i] = pq.top().second;
        pq.pop();
    }

    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}