#include <iostream>

using namespace std;

int main()
{
    int index = 0;
    int max = 1;
    for(int i=1;i<=100;i++)
    {
        int p;
        cin >> p;
        if(p > max)
        {
            max = p;
            index = i;
        }
    }
    
    cout << max << endl;
    cout << index;
}