#include <iostream>

using namespace std;

void reverse(int a[], int size, int l)
{
    for(int i=size-1;i>=0;i--)
        cout << a[i] << " ";
    for(int i=size;i<l;i++)
        cout << a[i] << " ";
}

int main()
{
    int n, size;
    cin >> n >> size;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    reverse(arr, size, n);
}