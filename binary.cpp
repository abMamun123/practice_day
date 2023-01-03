#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k, flag = 0;
    cin >> k;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == k)
        {
            cout << k << " found in index "
                 << mid<<endl;
            flag = 1;
            break;
        }
        if (a[mid] > k)
            right = mid - 1;
        else
            // (a[mid] < k)
            left = mid + 1;
    }
    if (flag == 0)
        cout << k << " not found\n";
    return 0;
}