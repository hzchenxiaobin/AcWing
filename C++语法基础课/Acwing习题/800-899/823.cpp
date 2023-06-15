#include <iostream>

using namespace std;

const int N = 10;

int n;

void dfs(int u, int nums[], bool st[])
{
    if(u >= n)
    {
        for(int i=0;i<n;i++)
            cout << nums[i] << " ";
        cout << endl;
        return;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(!st[i])
        {
            st[i] = true;
            nums[u] = i;
            dfs(u + 1, nums, st);
            st[i] = false;
        }
    }
}

int main()
{
    cin >> n;

    int nums[N] = {0};
    bool st[N];
    dfs(0, nums, st);
}