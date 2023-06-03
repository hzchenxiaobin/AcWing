#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d %d\n", a + b, a * b);

    float e, f;
    scanf("%f%f", &e, &f);
    printf("%.1f %.2f", e + f, e * f);

    char g, h;
    scanf("%c%c", &g, &h);
    printf("%c, %c", g, h);

    double k, l;
    scanf("%lf %lf", &k, &l);
    printf("%lf %f", k, l);

    long long m, n;
    scanf("%lld %lld", &m, &n);
    printf("%lld %lld", m, n);

    return 0;
}