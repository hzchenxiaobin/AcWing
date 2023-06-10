#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int res = 0;
    for(int i=0;i<s.length();i++)
    {
        char c = s[i];
        if(c >= '0' && c <= '9') res++;
    }
    cout << res;
}