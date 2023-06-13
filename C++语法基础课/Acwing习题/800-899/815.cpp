#include <iostream>

using namespace std;

void print(char str[])
{
    for(int i=0;i<100;i++)
    cout << str[i];
}

int main()
{
    char str[101];
    cin.getline(str, 101);

    print(str);
}