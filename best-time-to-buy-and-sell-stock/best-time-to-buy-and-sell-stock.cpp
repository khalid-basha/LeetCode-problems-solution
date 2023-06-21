class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price=INT32_MAX,sell_price=0;
        for(int & price : prices){
            buy_price=min(buy_price, price);
            sell_price=max(sell_price, price - buy_price);
        }
        return sell_price;
    }
};