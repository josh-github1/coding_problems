class Solution {
public:

    
    int romanToInt(string s) 
    {
        int num_t = 0;              // the function returns this value 
        
        
        int s_size = (int)s.length();
        
        for (int i = 0; i < s.length(); i++)
        {
            int addNum = 0;
            
            
            switch(s)
            {
                case 'I':
                    addNum = 1;
                case 'V':
                    addNum = 5;
                case 'X':
                    addNum = 10;
                case 'L':
                    addNum = 50;
                case 'C':
                    addNum = 100;
                case 'D':
                    addNum = 500;
                case 'M':
                    addNum = 1000;
            }
            
            if (s[i] == 'I' && s[i+1] == 'V')
            {
                addNum = 4;
                i++;
            }
            
            if (s[i] == 'I' && s[i+1] == 'X')
            {
                addNum = 9;
                i++;
            }
        
            if (s[i] == 'X' && s[i+1] == 'L')
            {
                addNum = 40;
                i++;
            }
            
            if (s[i] == 'X' && s[i+1] == 'C')
            {
                addNum = 90;
                i++;
            }
            
            if (s[i] == 'C' && s[i+1] == 'D')
            {
                addNum = 400;
            }
            
            if (s[i] == 'C' && s[i+1] == 'M')
            {
                addNum = 900;
            }
            
            num_t = num_t + addNum;
            
        }
    }



};