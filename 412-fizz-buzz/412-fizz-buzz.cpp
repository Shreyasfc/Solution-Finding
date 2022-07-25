class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> fizzBuzz(n);
        
        for (int i = 1; i < (n + 1); i++)
        {
            if (i % 5 == 0 && i % 3 == 0)
            {
                string str = "FizzBuzz";
                fizzBuzz.at((i - 1)) = str;
            }
            
            else if (i % 5 == 0)
            {
                string str = "Buzz";
                fizzBuzz.at((i - 1)) = str;
            }

            else if (i % 3 == 0)
            {
                string str = "Fizz";
                fizzBuzz.at((i - 1)) = str;
            }
            
            else
            {
                stringstream ss;
                ss << i;
                string str = ss.str();
                fizzBuzz.at((i - 1)) = str;
            }
        }
        
        return fizzBuzz;
    }
};