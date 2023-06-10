#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    int max, middle, min;
    
    if(a > b)
    {
        if(c > a) {
            max = c;
            middle = a;
            min = b;
        }
        else
        {
            max = a;
            if(c > b)
            {
                middle = c;
                min = b;
            } else
            {
                middle = b;
                min = c;
            }
        }
    } else 
    {
        if(c > b) {
            max = c;
            middle = b;
            min = a;
        }
        // b > c b > a
        else
        {
            max = b;
            if(c > a)
            {
                middle = c;
                min = a;
            } 
            else
            {
                middle = a;
                min = c;
            }
        }
    }
    cout << min << endl;
    cout << middle << endl;
    cout << max << endl;
    
    cout << endl;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}