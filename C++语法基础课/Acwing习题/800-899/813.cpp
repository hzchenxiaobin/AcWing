#include <iostream>

using namespace std;
const int N=100;
void print2D(int a[][N], int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int r,c;
    cin >> r >> c;
    
    int arr[N][N];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> arr[i][j];
    print2D(arr, r, c);
}