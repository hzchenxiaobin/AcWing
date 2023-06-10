#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    
    cout << "NOTAS:" << endl;
    int a = (int)(n / 100);
    cout << a << " nota(s) de R$ 100.00" << endl;
    n -= 100 * a;
    a = (int)(n / 50);
    cout << a << " nota(s) de R$ 50.00" << endl;
    n -= 50 * a;
    a = (int)(n / 20);
    cout << a << " nota(s) de R$ 20.00" << endl;
    n -= 20 * a;
    a = (int)(n / 10);
    cout << a << " nota(s) de R$ 10.00" << endl;
    n -= 10 * a;
    a = (int)(n / 5);
    cout << a << " nota(s) de R$ 5.00" << endl;
    n -= 5 * a;
    a = (int)(n / 2);
    cout << a << " nota(s) de R$ 2.00" << endl;
    n -= 2 * a;

    cout << "MOEDAS:" << endl;
    a = (int)(n / 1);
    cout << a << " moeda(s) de R$ 1.00" << endl;
    n -= 1 * a;
    a = (int)(n / 0.5);
    cout << a << " moeda(s) de R$ 0.50" << endl;
    n -= 0.5 * a;
    a = (int)(n / 0.25);
    cout << a << " moeda(s) de R$ 0.25" << endl;
    n -= 0.25 * a;
    a = (int)(n / 0.10);
    cout << a << " moeda(s) de R$ 0.10" << endl;
    n -= 0.10 * a;
    a = (int)(n / 0.05);
    cout << a << " moeda(s) de R$ 0.05" << endl;
    n -= 0.05 * a;
    cout << (int)((n + 0.009) / 0.01) << " moeda(s) de R$ 0.01" << endl;
}