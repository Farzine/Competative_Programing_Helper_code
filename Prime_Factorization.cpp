#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> prime_factors;
    for(int i=2;i*i<=n;i++)
    {
            while(n%i==0)
            {
                prime_factors.push_back(i);
                n/=i;
            }
    }
    if(n>1)
    {
        prime_factors.push_back(n);
    }
    for(auto x:prime_factors)
    {
        cout<<x<<" ";
    }

//time complexity: O(sqrt(n))

    return 0;
}