#include <iostream>

using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            arr[i][j] = 0;

    int r =0,c=0;
    int dir = 0;
    
    for(int i=1;i<=m*n;i++)
    {
        arr[r][c] = i;
        if(dir == 0) 
        {
            if(c == m - 1 || arr[r][c + 1]) dir=1;
            else c++;
        }
        if(dir == 1) 
        {
            if(r >= n - 1 || arr[r+1][c] > 0) dir=2;
            else r++;
        }
        if(dir == 2) 
        {
            if(c == 0 || arr[r][c-1] > 0) dir=3;
            else c--;
        }
        if(dir == 3) 
        {
            if(r == 0 || arr[r-1][c]) 
            {
                dir = 0;
                c++;
            }
            else r--;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}