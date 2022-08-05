class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int writerPointer = 0;
        for (int readerPointer = 0; readerPointer < nums.size(); readerPointer++)
        {
            if (nums[readerPointer] % 2 == 0)
            {
                int temp = nums[writerPointer];
                nums[writerPointer] = nums[readerPointer];
                nums[readerPointer] = temp;
                    
                writerPointer++;
            }
        }
        
        return nums;
        
    }
};