#include <iostream>

using namespace std;

const int N = 60;


int main()
{
    int n;
    cin >> n;
    long long arr[N + 1] = {0};
    arr[1] = 1;
    for(int i=2;i<=60;i++)
    {
        arr[i] = arr[i-1] + arr[i - 2];
    }
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        printf("Fib(%d) = %ld\n", a, arr[a]);
    }
}