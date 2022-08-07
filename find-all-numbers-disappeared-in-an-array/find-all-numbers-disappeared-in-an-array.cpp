class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<int> missingNum;
        
        for (int i = 1; i < nums.size() + 1; i++)
        {
        
            if(!binary_search(nums.begin(), nums.end(), i))
            {
               missingNum.push_back(i); 
            }
        
        }
        
        return missingNum;
    }
};