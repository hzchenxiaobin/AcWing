#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {

        for (int i = 0; i < n; i++)
        {
            int s = i + 1;
            bool f = true;
            for (int j = 0; j < n; j++)
            {
                cout << s << " ";
                if (f)
                {
                    if (s == 1)
                    {
                        f = false;
                        s = 2;
                    }
                    else
                        s--;
                }
                else
                {
                    s++;
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
}