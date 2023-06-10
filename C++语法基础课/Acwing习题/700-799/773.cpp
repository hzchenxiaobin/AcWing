#include <iostream>

using namespace std;

int main()
{
    string a,b;
    while(cin >> a && cin >> b)
    {
        int index = 0;
        for(int i=0;a[i];i++)
            if(a[i] > a[index]) index = i;
       for(int i=0;a[i];i++)
       {
           if(i == index + 1) cout << b;
           cout << a[i];
       }
       if(index == a.size() - 1) cout << b;
       cout << endl;
    }
}