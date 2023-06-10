#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%ld ", (long)pow(2, i + j));
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
}