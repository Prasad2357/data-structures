#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int max_sum= INT_MIN;

        for(int i=0; i<n; i++ )
        {
            int sum=0;
            for (int j=i;j<n; j++)
            {
                sum+=nums[j];

                if(sum> max_sum)
                {
                    max_sum=sum;
                }
            }
        }

        return max_sum;


}
};




int main() {
    vector<int> arr = { 2, 3, 5, -2, 7, -4 };

    // Create an instance of Solution class
    Solution sol;

    int maxSum = sol.maxSubArray(arr);

    // Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}