#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010;

struct Data
{
    int x;
    double y;
    string z;
    
    bool operator < (const Data &t) const
    {
        return x < t.x;
    }
} a[N];

int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i < n;i++)
        cin >> a[i].x >> a[i].y >> a[i].z;
    sort(a, a+n);
    
    for(int i=0;i<n;i++) printf("%d %.2lf %s\n", a[i].x, a[i].y, a[i].z.c_str());
}