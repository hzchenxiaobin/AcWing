#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string s = a + a, t = b;
    if(a.size() < b.size()) {
        s = b + b;
        t = a;
    }
    bool f = s.find(t) != string::npos;
    if(f) cout << "true";
    else cout << "false";
}