#include <iostream>

using namespace std;

void print(int a[], int size)
{
    for(int i=0;i<size;i++)
        cout << a[i] << " ";
}

int main()
{
    int l,s;
    cin >> l >> s;
    int arr[l] = {};
    for(int i=0;i<l;i++)
        cin >> arr[i];
    print(arr, s);
}