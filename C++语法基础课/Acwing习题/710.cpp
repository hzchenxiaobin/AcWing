#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    for(int i=n;c < 6;i++)
        if(i%2 == 1) {
            c++;
            cout << i << endl;
        }
}