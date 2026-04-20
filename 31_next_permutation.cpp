class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        //find the breaking point (dipping point), to find a number which is lower than the adjacent number from the end

        for (int i=n-2; i>=0; i--)   //the last number cannot be the breaking point
        {
            if(nums[i] < nums [i+1])
            {
                index = i;
                break;
            }
        }

        if (index == -1)  // it is the last number so the first number will be the answer [3,2,1] --> [1,2,3] 
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // find the number which is slightly greater than the index number

        for (int i = n-1; i>= index; i-- )
        {
            if(nums [i]> nums[index])
            {
                swap(nums[i], nums[index]); //swap both the numbers
                break;
            }
        }

        // sort the remaining numbers

        reverse(nums.begin()+ index+1, nums.end())

    }
};