#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int arr[26] = {0};
    for(char c : s)
        arr[c - 'a']++;
    string res = "no";
    for(char c : s)
        if(arr[c - 'a'] == 1) {
            res = "";
            res += c;
            break;
        }
    cout << res;
    
}