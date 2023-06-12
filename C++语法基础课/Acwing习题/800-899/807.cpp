#include <iostream>

using namespace std;

int sum(int l, int r)
{
    int s = 0;
    for(int i=l;i<=r;i++)
        s += i;
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
}