#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    
    //其中A和B为开始时刻的小时和分钟数，C和D为结束时刻的小时和分钟数。
    if(a > c || (a == c && b>=d)) c += 24;
    if(b > d) 
    {
        c--;
        d+=60;
    }
    
    int h = c -a, m = d - b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", h, m);
}