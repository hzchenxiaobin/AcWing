#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int k=0;k<n;k++)
    {
        string s;
        cin >> s;
        char c;
        int m = 0;
        for(int i=0;i<s.size();i++)
        {
            int t=1;
            char ct = s[i];
            while(i < s.size() - 1 && s[i+1] == s[i])
            {
                t++;
                i++;
            }
            
            if(t > m) {
                m = t;
                c = ct;
            }
            
        }
        cout << c << " " << m << endl;
    }
}