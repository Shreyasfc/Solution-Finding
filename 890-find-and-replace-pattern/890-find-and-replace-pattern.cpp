class Solution {
public:
    int uniqueFinder(string info)
    {
        unordered_map<char, int> helperMap;
        
        int num = 0;
        
        vector<int> tempIntStorage;
        
        for (int i = 0; i < info.size(); i++) 
        {
            if (helperMap.find(info[i]) == helperMap.end())
            {
                num++;
                helperMap.insert({info[i],num}); 
                tempIntStorage.push_back(num);
            }
            else
            {
                int locVal = helperMap[info[i]];
                tempIntStorage.push_back(locVal);
            }
        }
        
        int returnVal = 0;
        reverse(tempIntStorage.begin(), tempIntStorage.end());
        
        for (int i = 0; i < tempIntStorage.size(); i++)
        {
            returnVal += (10^i) * tempIntStorage[i];
        }
        return returnVal;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        int patternSize = uniqueFinder(pattern);    
        vector<string> output;
        
        for (int i = 0; i < words.size(); i++)
        {
            int wordSize = uniqueFinder(words[i]);
            if (wordSize == patternSize)
            {
                output.push_back(words[i]);
            }
        }
        
        return output; 
    }
};
