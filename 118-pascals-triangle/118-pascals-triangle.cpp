class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTraingle;
        
        vector<int> pascalRows = {1};
        pascalTraingle.push_back(pascalRows);
        if (numRows == 1)
        {
            return pascalTraingle;
        }
        
        pascalRows = {1, 1};
        pascalTraingle.push_back(pascalRows);
        if (numRows == 2)
        {
            return pascalTraingle;
        }
        
        vector<int> pascalNew;
        for (int i = 2; i < numRows; i++)
        {
            size_t lengthInner = pascalRows.size() - 1; 
            pascalNew = {1};
            
            for (int x = 0; x < lengthInner; x++)
            {   
                int newValue = pascalRows[x] + pascalRows[x + 1];
                pascalNew.push_back(newValue);
            }
            
            pascalNew.push_back(1);
            pascalRows = pascalNew;
            pascalTraingle.push_back(pascalRows);
        }
        
        return pascalTraingle;
    }
};