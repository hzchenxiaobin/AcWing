#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int r=0;
    int s = min(a, b) + 1, e = max(a, b);
    for(int i=s;i<e;i++)
    {
        if(i % 2 == 1 || i % 2 == -1)  r+=i;
    }
    cout << r;
}