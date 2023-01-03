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
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout<<" low = "<<low<< " high = "<<high <<" mid = "<<mid<<endl;
        if (a[mid] == k)
        {
            cout << k << " found in index " << mid;
            flag = 1;
            break;
        }
        if (a[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag == 0)
        cout << k << " not found in any index\n";
    return 0;
}