#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n != 0)
    {
        string a;
        cin >> a;
        for(int i=1;i<n;i++)
        {
            string t;
            cin >> t;
            
            string st = "";
            for(int as = a.size() - 1, ts = t.size() - 1; as >= 0 && ts >= 0;as--, ts--)
            {
                if(a[as] != t[ts]) break;
                st += a[as];
            }
            
            reverse(st.begin(), st.end());
            a = st;
        }
        
        cout << a << endl;
        
        cin >> n;
    }
}