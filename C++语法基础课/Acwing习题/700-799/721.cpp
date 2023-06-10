#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;
    while(p > 0)
    {
        for(int i=1;i<=p;i++)   cout << i <<" ";
        cout << endl;
        cin >> p;
    }
}