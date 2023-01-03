#include <bits/stdc++.h>
using namespace std;
// int main()
// {//.............................................problem 1
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += v[i];
//     cout << sum << "\n";
//     return 0;
// }

// int main()
// { //............................................problem 2
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int mul = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != 0 && i % 2 != 0)
//         {
//             mul *= v[i];
//         }
//     }
//     cout << mul << "\n";
//     return 0;
// }

// int main()
// { //........................................problem 3
//     string s;
//     cin >> s;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (i % 2 == 0)
//         {
//             if (s[i] == 122)
//                 s[i] = s[i] - 26 + 1;
//             else
//                 s[i] += 1;
//         }
//     }
//     cout << s << "\n";
//     return 0;
// }

// int main()
// { //............................................problem 4
//     int n;
//     cin >> n;
//     vector<int> v1(n);
//     for (int i = 0; i < n; i++)
//         cin >> v1[i];
//     int m;
//     cin >> m;
//     vector<int> v2(m);
//     for (int i = 0; i < m; i++)
//         cin >> v2[i];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(v1[i]== v2[j])
//             cout<<v1[i]<<" ";
//         }
//     }
//     return 0;
// }

int main()
{ //............................................problem 5
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(v1[i]==v2[j])
            cout<<v1[i]<<" ";
        }
    }
    return 0;
}