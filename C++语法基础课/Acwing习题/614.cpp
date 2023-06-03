#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    printf("%d eh o maior", max(a, max(b, c)));
}