#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    int n;
    cin >> n;
    vector<int> a(n+1);

    unordered_map<int, int> pos;

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }

    int m;
    cin >> m;
    int sum = 0;
    int dum = 0;

    for (int i = 0; i < m; i++) 
    {
        int x;
        cin >> x;

        sum += pos[x];
        dum += abs(pos[x]-n+1);
    }

    cout << sum << " " << dum << endl;

    return 0;
}
