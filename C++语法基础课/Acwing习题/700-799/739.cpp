#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<100;i++)
    {
        double a;
        cin >> a;
        
        if(a <= 10)
            printf("A[%d] = %.1lf\n", i, a);
    }
}
