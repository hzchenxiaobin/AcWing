#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    string res = "";
    for(int i=0;i<s.size();i++)
        res += (int)s[i] + (int)s[(i + 1) % s.size()];
    cout << res;
}