#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string a, b;
    cin >> a >> b;
    
    for(int i=0;i<s.size();i++)
    {
        string t = "";
        while(s[i] != ' ' && i < s.size())
        {
            t += s[i++];
        }
        
        if(t == a) cout << b << " ";
        else cout << t << " ";
    }
    
}