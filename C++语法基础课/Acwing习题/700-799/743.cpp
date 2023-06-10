#include <iostream>

using namespace std;

int main()
{
    int l;
    char s;
    cin >> l >> s;
    double t = 0;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
        {
            double a;
            cin >> a;
            if(i != l) continue;
            t += a;
        }
    if(s == 'S')
        printf("%.1lf", t);
    else
        printf("%.1lf", t / 12);
}