#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin >> p;
        bool flag = true;
        for(int i=2;i*i<=p;i++)
        {
            if(p % i == 0)
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
            cout << p << " is prime" << endl;
        else
            cout << p << " is not prime" << endl;
    }
}