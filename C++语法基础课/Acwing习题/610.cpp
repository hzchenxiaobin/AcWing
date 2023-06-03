#include <iostream>

using namespace std;

int main()
{
    string a;
    double b, c;
    cin >> a >> b >> c;
    printf("TOTAL = R$ %.2f", b + c * 0.15);
}