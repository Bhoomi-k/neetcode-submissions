class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = 0;
        int i=0, j=1;
        while(j<n){
            if(prices[i]<prices[j]){
                maxi = max(maxi, prices[j]-prices[i]);
            }
            else i=j;
            j++;
        }
        return maxi;
    }
};
