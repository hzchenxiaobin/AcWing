#include <iostream>

using namespace std;

int main()
{
    double k;
    string a, b;
    cin >> k >> a >> b;
    
    double t = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == b[i]) t = t + 1.0;
    }
    
    if((t / a.size()) >= k ) cout << "yes";
    else cout << "no";
    
}