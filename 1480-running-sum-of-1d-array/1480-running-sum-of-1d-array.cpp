class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        size_t length = nums.size();
        
        std::cout << length << std::endl;
        
        vector<int> output_array;
        int current_sum = 0;
        
        for (int i = 0; i < length; i++)
        {
            current_sum += nums[i] ;
            output_array.push_back(current_sum);
        }
        
        
        return output_array;
    }
};