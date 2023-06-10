#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin >> a >> b;
        int p = 0;
        for(int i=min(a, b) + 1;i<max(a, b);i++)
            if(abs(i % 2) == 1) p+=i;
        cout << p << endl;
    }
}