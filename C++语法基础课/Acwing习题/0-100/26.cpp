class Solution {
public:
    int NumberOf1(int n) {
        int a = 1;
        int res = 0;
        for(int i=0;i<=31;i++)
        {
            if(a & n) res++;
            a <<= 1;
        }
        
        return res;
    }
};