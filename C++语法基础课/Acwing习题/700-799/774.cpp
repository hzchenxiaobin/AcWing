#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s = s.substr(0, s.size()- 1);
    
    stringstream ss(s);
    string t;
    int max = 0;
    string res;
    while(ss >> t)
    {
        if(t.size() > max)
        {
            max = t.size();
            res = t;
        }
    }
    cout << res;
}