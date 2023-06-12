#include <iostream>

using namespace std;

int jie(int x)
{
    if(x == 1) return x;
    return x * jie(x - 1);
}

int main()
{
    int a;
    cin >> a;
    
    cout << jie(a);
}