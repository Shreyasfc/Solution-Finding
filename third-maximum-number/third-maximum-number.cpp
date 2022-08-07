class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        vector<int> maxArray;
        int max = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
                             
            auto it = find(maxArray.begin(), maxArray.end(), nums[i]);
  
            if (it != maxArray.end())  
            {
                continue;
            }
            else 
            {
                if (nums[i] > max)
                {
                    max = nums[i];
                }
                maxArray.push_back(nums[i]);
            }
            
        }
        
        if (maxArray.size() < 3)
        {
            return max;
        }
        sort (maxArray.begin(), maxArray.end());
        reverse(maxArray.begin(),maxArray.end());
        return maxArray[2];
    }
};