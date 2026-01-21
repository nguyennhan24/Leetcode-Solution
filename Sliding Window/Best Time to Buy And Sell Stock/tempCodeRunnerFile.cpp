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
