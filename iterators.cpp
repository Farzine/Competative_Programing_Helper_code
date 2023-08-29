#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>>:: iterator it;

    for(it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }

    // for(auto i : v)
    // cout<<i.first<<" "<<i.second<<endl;

    // for(pair<int,int>&value : v)
    // cout<<value.first<<" "<<value.second<<endl;



    return 0;
}