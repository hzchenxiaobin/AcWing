#include <iostream>

using namespace std;

int abs(int x)
{
    return x > 0 ? x : -x;
}

int main()
{
    int a;
    cin >> a;
    cout << abs(a);
    
}