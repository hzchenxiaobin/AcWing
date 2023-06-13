#include <iostream>

using namespace std;

int get_unique_count(int a[], int n)
{
    int arr[1001] = {0};
    for(int i=0;i<n;i++) arr[a[i]]++;
    
    int res = 0;;
    for(int i=0;i<1001;i++)
        if(arr[i]) res++;
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << get_unique_count(arr, n);
}