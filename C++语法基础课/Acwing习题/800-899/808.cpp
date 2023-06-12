#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int x = 1;
    for(int i=1;i<=a && i<=b;i++)
        if(a % i == 0 && b % i == 0) x = i;
    
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}