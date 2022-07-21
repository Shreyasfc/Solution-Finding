class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> answer;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int testtarget = target;
            testtarget -= nums[i];
            
            if (i == (nums.size() - 1))
            {
                break;  
            }
            
            for (int j = i + 1; j < nums.size(); j++)
            {
                int secondtesttarget = testtarget;
                secondtesttarget -= nums[j];
                if (secondtesttarget == 0)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }    
        }
        
        return answer;
    }
};