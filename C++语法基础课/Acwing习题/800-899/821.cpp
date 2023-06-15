#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n+1] = {0};
    arr[0] = 1;
    
    for(int i=1;i<=n;i++)
    {
        if(i == 1) arr[i] = arr[0];
        else
        {
            arr[i] = arr[i- 1] + arr[i-2];
        }
    }
    cout << arr[n];
}