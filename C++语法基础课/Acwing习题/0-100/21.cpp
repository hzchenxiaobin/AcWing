class Solution {
public:
    int Fibonacci(int n) {
        if(n == 0 || n == 1) return n;
        int a = 0, b = 1;
        for(int i=2;i<=n;i++)
        {
            int tmp = a + b;
            a = b;
            b = tmp;
        }
        
        return b;
    }
};