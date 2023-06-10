#include <iostream>

using namespace std;

int main()
{
    double a;
    cin >> a;
    if(a <= 2000)
    {
        printf("Isento");
        return 0;
    }
    
    double r = 0;
    if(a > 4500) {
        r += (a - 4500) * 0.28;
        a = 4500;
    }
    
    if(a > 3000)
    {
        r += (a - 3000) * 0.18;
        a = 3000;
    }
    
    if(a > 2000)
    {
        r += (a - 2000) * 0.08;
    }
    
    printf("R$ %.2lf", r);
    
}