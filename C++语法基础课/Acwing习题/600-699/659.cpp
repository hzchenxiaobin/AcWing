#include <iostream>

using namespace std;

int main()
{
    double a;
    cin >> a;
    
    if(a < 0 || a > 100)
        printf("Fora de intervalo");
    if(a >= 0 && a <= 25)
        printf("Intervalo [0,25]");
    if(a > 25 && a <= 50)
        printf("Intervalo (25,50]");
    if(a > 50 && a <= 75)
        printf("Intervalo (50,75]");
    if(a > 75 && a <= 100)
        printf("Intervalo (75,100]");
}