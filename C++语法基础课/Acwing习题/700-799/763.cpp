#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // 猎人赢枪、枪赢狗熊、狗熊赢猎人
    for(int i=0;i<n;i++)
    {
        string a, b;
        cin >> a >> b;
        if(a == b) cout << "Tie" << endl;
        else if((a == "Hunter" && b == "Gun") 
        || (a == "Gun" && b == "Bear")
        || (a == "Bear" && b == "Hunter"))
            cout << "Player1" << endl;
        else cout << "Player2" << endl;
    }
}