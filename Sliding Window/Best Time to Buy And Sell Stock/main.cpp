#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();

    int minPrice = INT_MAX;

    int result = 0;

    for(int i = 0; i < n; i++) {
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        } else{
            result = max(result, prices[i] - minPrice);
        }
    }

    return result;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
 
    int result = maxProfit(prices);

    cout << result << endl;

    return 0;
}