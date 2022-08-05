class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int writerPointer = 0;
        int tracker = 0;
        for (int readerPointer = 0; readerPointer < nums.size(); readerPointer++)
        {
            if (nums[readerPointer] != val)
            {
                nums[writerPointer] = nums[readerPointer];
                writerPointer++;
                tracker++;
            }
        }
        
        return tracker;
    }
};