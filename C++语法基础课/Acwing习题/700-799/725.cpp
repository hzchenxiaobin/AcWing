#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int k=0;k<n;k++)
    {
        int p;
        cin >> p;

        int s = 0;
        for(int i=1;i*i< p ;i++)
        {
            if(p % i != 0) continue;
            if(i*i == p || i == 1) s += i;
            else s += i + p/i;
        }
        if(s == p) cout << p << " is perfect\n";
        else cout << p << " is not perfect\n";
    }
}