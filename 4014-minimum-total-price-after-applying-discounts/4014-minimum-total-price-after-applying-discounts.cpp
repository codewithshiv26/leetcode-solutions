class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double sum=0.0;
        int i=0;
        while (i<prices.size() && i<discounts.size()){
            sum += (double)prices[i]*(100-discounts[i])/100.0;
            i++;
        }
        while(i<prices.size()){
            sum+=prices[i];
            i++;
        }
        return sum;
    }
};