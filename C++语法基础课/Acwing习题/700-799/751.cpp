#include <iostream>

using namespace std;

int main()
{
    char s;
    cin >> s;
    double t = 0;
    int p = 0;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
        {
            double a;
            cin >> a;
            
            if(i + j >= 11 || j >= i) continue;
            t += a;
            p++;
        }
    if(s == 'S') printf("%.1lf", t);
    else printf("%.1lf", t/p);
}