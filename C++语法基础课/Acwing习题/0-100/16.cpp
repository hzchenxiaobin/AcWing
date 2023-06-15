class Solution {
public:
    string replaceSpaces(string &str) {
        string s = "";
        for(char c : str)
        {
            if(c == ' ')
                s += "%20";
            else
            {
                s += c;
            }
        }
        
        return s;
    }
};