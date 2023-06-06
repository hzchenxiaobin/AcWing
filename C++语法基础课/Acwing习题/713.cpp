#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int l =0;
    for(int i=0;i<n;i++)
    {
        int p;
        cin >> p;
        if(p>=10 && p<=20) l++;
    }
    
    printf("%d in\n", l);
    printf("%d out\n", n - l);
}