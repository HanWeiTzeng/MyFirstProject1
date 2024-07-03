#include <stdio.h>

int maxProfit(int*, int);

int main() {
    int price[6] = {6,7,1,7,5,4};
    int priceSize = 6;

    int Max_Pf = maxProfit(price, priceSize);
    printf("Max_Pf = %d.\n", Max_Pf);
    return 0;
}

int maxProfit(int* prices, int pricesSize) {
    int current_cheap_price = prices[0];
    int current_max_profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        int tmp_maxProfit  = prices[i] - current_cheap_price;  // i = 1, price[1] = 7 , tmp_maxProfit = 7-6 = 1
                                                               // i = 2, price[2] = 1 , tmp_maxProfit = 1-6 = -5
                                                               // i = 3, price[3] = 6 , tmp_maxProfit = 6-1 = 0  --> 5
        if (current_cheap_price > prices[i])
            current_cheap_price = prices[i];
        if (tmp_maxProfit > current_max_profit)
            current_max_profit = tmp_maxProfit;

    }
    return current_max_profit;
    // 7 - 6 = 1
    // 1 - 6 = -5
    // 6 - 1 = 5
    // 5 - 1 = 4
    // ...
    // ...
}
