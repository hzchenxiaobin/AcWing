#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int min, index=0;
    cin >> min;
    for(int i=1;i<n;i++)
    {
        int a;
        cin >> a;
        if(a < min) {
            min = a;
            index = i;
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Position: %d", index);
}