#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h = n / 3600;
    n %= 3600;
    int m = n / 60;
    n %= 60;
    printf("%d:%d:%d", h, m, n);
}