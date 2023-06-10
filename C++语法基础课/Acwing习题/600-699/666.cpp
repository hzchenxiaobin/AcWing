#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    double a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    
    double arr[3] = {a1,b1,c1};
    sort(arr, arr+3);
    double a = arr[2], b=arr[1], c= arr[0];

    if(a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(a*a == b*b + c *c) 
        printf("TRIANGULO RETANGULO\n");
    if(a*a > b*b + c *c) 
        printf("TRIANGULO OBTUSANGULO\n");
    if(a*a < b*b + c *c) 
        printf("TRIANGULO ACUTANGULO\n");
    if(a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a== b || b == c)
        printf("TRIANGULO ISOSCELES\n");
}