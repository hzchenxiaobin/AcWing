#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b > c && d>a && (c+d)>(a+b) && a%2==0 && c>0 && d>0)
        printf("Valores aceitos");
    else
        printf("Valores nao aceitos");
}