#include <iostream>

using namespace std;

int main()
{
    int arr[20] = {};
    
    for(int i=0;i<20;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<20;i++)
        printf("N[%d] = %d\n", i, arr[19-i]);
}