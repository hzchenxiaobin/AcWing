#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(a > 0 && b > 0)
    {
        int t=0;
        for(int i=min(a,b);i<=max(a,b);i++)
        {
            cout << i << " ";
            t += i;
        }
        
        cout << "Sum=" << t << endl;
        cin >> a >> b;
    }
}