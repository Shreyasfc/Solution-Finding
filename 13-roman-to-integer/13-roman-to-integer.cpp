class Solution {
public:
    int romanToInt(string s) 
    {
        int roman = 0;
        bool skip;
        for (int i = 0; i < s.size(); i++)
        {
            if (skip == true)
            {
                skip = false;
                continue;
            }
            
            if (s[i] == 'I')
            {
                int adderVal = 1;
                if ((i + 1) != s.size())
                {
                    if (s[i + 1] == 'V')
                    {
                        adderVal =  4;
                        skip = true;
                    }
                    if (s[i + 1] == 'X')
                    {
                        adderVal =  9;
                        skip = true;
                    }
                }
                roman += adderVal;
            }
            
            if (s[i] == 'V')
            {

                roman += 5;
            }
            
            if (s[i] == 'X')
            {
                int adderVal = 10;
                if ((i + 1) != s.size())
                {
                    if (s[i + 1] == 'L')
                    {
                        adderVal =  40;
                        skip = true;
                    }
                    if (s[i + 1] == 'C')
                    {
                        adderVal =  90;
                        skip = true;
                    }
                }
                roman += adderVal;
            }   
            
            if (s[i] == 'L')
            {

                roman += 50;
            }
            
            if (s[i] == 'C')
            {
                int adderVal = 100;
                if ((i + 1) != s.size())
                {
                    if (s[i + 1] == 'D')
                    {
                        adderVal =  400;
                        skip = true;
                    }
                    if (s[i + 1] == 'M')
                    {
                        adderVal =  900;
                        skip = true;
                    }
                }
                roman += adderVal;
            }   
            
            if (s[i] == 'D')
            {

                roman += 500;
            }
            
            if (s[i] == 'M')
            {

                roman += 1000;
            }
            
        }
        
        return roman;
    }
};