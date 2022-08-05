class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> heightOrdered = heights;
        sort(heightOrdered.begin(), heightOrdered.end());
        
        int unmatch = 0;
        
        for (int i = 0; i < heightOrdered.size(); i++)
        {
            if (heightOrdered[i] != heights[i])
            {
                unmatch++;
            }
        }
        
        return unmatch;
    }
};