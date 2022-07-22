class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
        {
            return false;
        }
        
        uint val = x, reverseVal = 0, remainder;
        
        while (val != 0)
        {
            remainder = val % 10;   
            reverseVal = reverseVal * 10 + remainder;
            val /= 10;
        }
        
        if (reverseVal == x)
        {
            return true;
        }
        return false;
    }
};