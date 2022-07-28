class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int occurance = 0;
        int relevantPos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.at(i) != val)
            {
                occurance++;
                int temp = nums.at(relevantPos);
                nums.at(relevantPos) = nums.at(i);
                nums.at(i) = temp;
                relevantPos++;
            }
        }
        
        return occurance;
    }
};