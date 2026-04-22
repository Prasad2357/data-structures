#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate max profit using brute force
    int stockbuySell(vector<int>& prices)
    {
        int profit = 0;
        int max_profit = 0;
        int n = prices.size();

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                profit = prices[j] - prices[i];
                max_profit = max(profit, max_profit);

                // cout<<max_profit<<"\n";
            }
        }

        return max_profit;
        

    }


};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << sol.stockbuySell(prices) << endl;
    return 0;
}