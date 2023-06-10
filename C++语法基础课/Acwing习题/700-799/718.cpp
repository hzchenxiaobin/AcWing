#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int total = 0;
    int c=0, r=0, f=0;
    for(int i=0;i<n;i++)
    {
        int l;
        char type;
        cin >> l >> type;
        if(type == 'C') c += l;
        if(type == 'R') r += l;
        if(type == 'F') f += l;
        total += l;
    }
    
    double cc = c / (total * 1.0);
    double rr = r / (total * 1.0);
    double ff = f / (total * 1.0);
    printf("Total: %d animals\n", total);
    printf("Total coneys: %d\n", c);
    printf("Total rats: %d\n", r);
    printf("Total frogs: %d\n", f);
    printf("Percentage of coneys: %.2lf %\n", cc*100);
    printf("Percentage of rats: %.2lf %\n", rr*100);
    printf("Percentage of frogs: %.2lf %\n", ff*100);
}