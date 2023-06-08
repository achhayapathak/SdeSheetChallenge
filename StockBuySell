#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini = prices[0], maxi = prices[0], ans = 0;

        for(auto todays_price : prices) {
            if(todays_price < mini) {
                mini = maxi = todays_price;
            }
            if(todays_price > maxi) {
                maxi = todays_price;
                ans = max(maxi - mini, ans);
            }
        }
        return ans;
}
