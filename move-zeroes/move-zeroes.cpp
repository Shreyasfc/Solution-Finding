class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int writerPointer = 0;
        for (int readerPointer = 0; readerPointer < nums.size(); readerPointer++)
        {
            if (nums[readerPointer] != 0)
            {
                nums[writerPointer] = nums[readerPointer];
                writerPointer++;
            }
        }
        
        for (int i = writerPointer + 1; writerPointer < nums.size(); writerPointer++)
        {
            nums[writerPointer] = 0;
        }
    }
};