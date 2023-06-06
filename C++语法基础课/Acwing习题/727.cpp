#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<(n + 1)/2;i++)
    {
        int c = 2 * i + 1;
        int t = (n - c) / 2 - 1;
        for(int k=0;k<=t;k++) cout << " ";
        for(int k=0;k<c;k++) cout << "*";
        for(int k=0;k<t;k++) cout << " ";
        cout << endl;
    }
    
    for(int i=n/2-1;i>=0;i--)
    {
        int c = 2 * i + 1;
        int t = (n - c) / 2 - 1;
        for(int k=0;k<=t;k++) cout << " ";
        for(int k=0;k<c;k++) cout << "*";
        for(int k=0;k<t;k++) cout << " ";
        cout << endl;
    }
}