#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    double t = 0;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
        {
            double a;
            cin >> a;
            if(j == n) t+= a;
        }
    if(c == 'M') t /= 12;
    printf("%.1lf", t);
}