#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double l=-10000, r=10000;
    while(r - l > 1e-7)
    {
        double m = (l + r) / 2;
        double val = m * m *m;
        if(val > n) r = m;
        else l = m;
    }
    
    printf("%.6f", l);
}