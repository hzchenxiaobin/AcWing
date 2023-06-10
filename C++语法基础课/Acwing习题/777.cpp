#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    
    while(a != ".")
    {
        int l = a.size();
        for(int i=1;i<=l;i++)
        {
            if(l % i != 0) continue;
            int p = l / i;
            string s = "";
            string str = a.substr(0, i);
            for(int i=0;i<p;i++) s += str;
            if(s == a) {
                cout << p << endl;
                break;
            }
        }
        
        cin >> a;
    }
}