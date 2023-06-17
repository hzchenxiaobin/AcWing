// #include <iostream>
// #include <algorithm>

// using namespace std;

// const int N = 100010;
// int n, m;

// int main()
// {
//     cin >> n >> m;
//     vector<int> v;
//     for(int i=0;i<n;i++) 
//     {
//         int tmp;
//         cin >> tmp;
//         v.push_back(tmp);
//     }
    
//     for(int i=0;i<m;i++)
//     {
//         int target;
//         cin >> target;
//         auto p1 = lower_bound(v.begin(), v.end(), target);
//         auto p2 = upper_bound(v.begin(), v.end(), target);
//         if(p1 == v.end() || *p1 != target)
//             cout << "-1 -1" << endl;
//         else
//             cout << p1 - v.begin() << " " << p2 - v.begin() - 1 << endl;
//     }
// }

