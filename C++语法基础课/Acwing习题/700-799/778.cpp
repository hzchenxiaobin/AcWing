#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    stringstream ss(s);
    getline(ss, s, ',');
    string a, b;
    getline(ss, a, ',');
    getline(ss, b, ',');
    
    int i1 = -1;
    for(int i=0;i<=s.size() - a.size();i++)
    {
        bool t = true;
        int j = i;
        for(int k=0;k<a.size();k++)
            if(s[j++] != a[k]) t = false;
        if(t) {
            i1 = i;
            break;
        }
    }
    int i2 = -1;
    for(int i=0;i<=s.size() - b.size();i++)
    {
        bool t = true;
        int j = i;
        for(int k=0;k<b.size();k++)
            if(s[j++] != b[k]) t = false;
        if(t) i2 = i;
    }
    if(i1 != -1 && i2 != -1 && i2 >= i1 + a.size()) cout << i2 - i1 - a.size();
    else cout << -1;
    
}