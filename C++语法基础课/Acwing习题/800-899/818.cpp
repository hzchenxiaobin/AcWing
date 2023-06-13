#include <iostream>
#include <algorithm>

using namespace std;

void sort(int a[], int l, int r)
{
   int arr[r - l + 1] = {0};
   for(int i=l;i<=r;i++)
    arr[i - l] = a[i];
    sort(arr, arr+r-l+1);
    for(int i=0;i<r-l+1;i++)
        a[i + l] = arr[i];
}

int main()
{
    int n,l,r;
    cin >> n >> l >> r;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, l, r);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}