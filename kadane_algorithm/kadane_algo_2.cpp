#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr) {

    int sum = arr[0];
    int max_sum = arr[0];

    // either start new subarray or continue previous while adding the element
    for(int i=1; i<arr.size(); i++)
    {
        sum = max(arr[i], arr[i] + sum);

        //update max_sum if new subarray sum is greater
        max_sum = max(sum, max_sum);

        cout<<"The max sum is:"<<max_sum;
        cout<<"\n";
    }

    return max_sum;

}


int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr); 
    return 0;
}