#include <iostream>

using namespace std;

int main()
{
    double a;
    cin >> a;
    
    if(a >= 0 && a <= 400)
    {
        printf("Novo salario: %.2lf\n", a * 1.15);
        printf("Reajuste ganho: %.2lf\n", a * 0.15);
        printf("Em percentual: %s", "15 %");
    }
    
    else if(a > 400 && a <= 800)
    {
        printf("Novo salario: %.2lf\n", a * 1.12);
        printf("Reajuste ganho: %.2lf\n", a * 0.12);
        printf("Em percentual: %s", "12 %");
    }
    
    else if(a > 800 && a <= 1200)
    {
        printf("Novo salario: %.2lf\n", a * 1.10);
        printf("Reajuste ganho: %.2lf\n", a * 0.1);
        printf("Em percentual: %s", "10 %");
    }
    
    else if(a > 1200 && a <= 2000)
    {
        printf("Novo salario: %.2lf\n", a * 1.07);
        printf("Reajuste ganho: %.2lf\n", a * 0.07);
        printf("Em percentual: %s", "7 %");
    }
    
    else if(a > 2000)
    {
        printf("Novo salario: %.2lf\n", a * 1.04);
        printf("Reajuste ganho: %.2lf\n", a * 0.04);
        printf("Em percentual: %s", "4 %");
    }
}