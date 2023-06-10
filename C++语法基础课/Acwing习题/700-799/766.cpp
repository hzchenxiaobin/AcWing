#include <iostream>

using namespace std;

int main()
{
    string s = "";
    string a;
    while(cin >> a)
    {
        s += a + " ";
    }
    cout << s;
}