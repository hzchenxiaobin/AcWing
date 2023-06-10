#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        int a;
        cin >> a;
        if(a <= 0) a=1;
        printf("X[%d] = %d\n", i, a);
    }
}