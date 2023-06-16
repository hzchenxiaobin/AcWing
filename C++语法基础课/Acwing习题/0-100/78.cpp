class Solution {
public:
    string leftRotateString(string str, int n) {
        string res = "";
        for(int i = n;i<str.length();i++)
            res += str[i];
        for(int i=0;i<n;i++)
            res += str[i];
        return res;
    }
};