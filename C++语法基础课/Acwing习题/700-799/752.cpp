#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    
    double t = 0;
    int count = 0;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
        {
            double d = 0;
            cin >> d;
            
            if(i < j && i+j>=12) {
                t += d;
                count++;
            }
        }
    if(c == 'M') t /= count;
    printf("%.1lf", t);
}