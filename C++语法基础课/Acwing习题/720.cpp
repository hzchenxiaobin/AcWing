#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    while(n <= 0) cin  >> n;
    
    int r=0;
    for(int i=a;i<a+n;i++) r+=i;
    
    cout << r;
}