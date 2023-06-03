#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    printf("%.4f", sqrt((a-c) * (a-c) + (b - d) *(b - d)));
}