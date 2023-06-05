#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >>b;
    if(a == 1) 
        printf("Total: R$ %.2f", 4.0 * b);
    if(a == 2) 
        printf("Total: R$ %.2f", 4.5 * b);
    if(a == 3) 
        printf("Total: R$ %.2f", 5.0 * b);
    if(a == 4) 
        printf("Total: R$ %.2f", 2.0 * b);
    if(a == 5) 
        printf("Total: R$ %.2f", 1.5 * b);
    
}