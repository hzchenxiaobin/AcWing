#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if(b * b - 4 * a * c < 0 || a== 0)
    {
        printf("Impossivel calcular");
        return 0;
    }
    
    double p1 = (0-b) / (2 * a), p2 = sqrt(b*b - 4 * a * c) / (2 * a);
    printf("R1 = %.5lf\n", p1 - p2);
    printf("R2 = %.5lf", p1 + p2);
}