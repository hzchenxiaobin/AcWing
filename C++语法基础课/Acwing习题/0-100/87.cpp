class Solution {
public:
    int strToInt(string str) {
        int flag = 1;
        long res = 0;
        for(char c : str)
        {
            if (c == ' ' || c == '+') continue;
            if(c == '-') flag = -1;
            else if(c >= '0' && c <= '9') 
            {
                res *= 10;
                res += c - '0';
                if(res * flag > INT_MAX) return INT_MAX;
                if(res * flag < INT_MIN) return INT_MIN;
            } else return res;
        }
        
        return (int)(res * flag);
    }
};