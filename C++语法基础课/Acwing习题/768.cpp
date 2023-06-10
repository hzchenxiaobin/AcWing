#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    string s1="",s2="";
    for(int i=0;i<a.size();i++)
        s1 += tolower(a[i]);
    for(int i=0;i<b.size();i++)
        s2 += tolower(b[i]);
    if(s1 == s2) {
        cout << "=";
        return 0;
    }
    
    for(int i=0;i<s1.size();i++)
    {
        if(!s2[i]) {
            cout << ">";
            return 0;
        }
        if(s1[i] == s2[i]) continue;
        if(s1[i] > s2[i]) 
        {
            cout << ">";
            return 0;
        }
        else
        {
            cout << "<";
            return 0;
        }
    }
    
    cout << "<";
}