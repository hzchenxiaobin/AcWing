#include <iostream>
#include <cmath>

using namespace std;

int arr[100][100] = { 0 };

int main()
{
    int n;
    cin >> n;
    while(n>0) 
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int m = min(min(i, j), min(n-i-1, n-j-1));
                arr[i][j] = m + 1;
            }
            
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }

    
}