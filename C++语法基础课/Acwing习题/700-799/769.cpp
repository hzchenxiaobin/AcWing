#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    char c;
    cin >> c;
    
    for(int i=0;i<s.length();i++)
    {
        char t = s[i];
        if(t == c) cout << "#";
        else cout << t;
    }
}