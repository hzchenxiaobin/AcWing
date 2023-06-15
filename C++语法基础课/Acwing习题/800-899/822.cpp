#include <iostream>

using namespace std;
int arr[11][11] = {0};
int main()
{
    int n, m;
    cin >> n >> m;
    arr[0][0] = 1;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        {
            if(i + 1 <= n) arr[i+1][j] += arr[i][j];
            if(j + 1 <= m) arr[i][j+1] += arr[i][j];
        }
    cout << arr[n][m];
}