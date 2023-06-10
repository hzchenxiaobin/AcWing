#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    string r = "";
    for(char c : s)
        if((c >= 'a'&& c < 'z') || (c >= 'A' && c < 'Z')) r += c + 1;
        else if(c == 'z') r += 'a';
        else if(c == 'Z') r += 'A';
        else r += c;
    cout << r;
}
