int maxProfit(int* prices, int pricesSize){
    int min = prices[0];
    int max = prices[0];
    int profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] > max) {
            max = prices[i];
            if (profit < max - min) {
                profit = max- min;
            }
        } else if (prices[i] < min) {
            min = prices[i];
            max = prices[i];
        }
    }
    return profit;
}
