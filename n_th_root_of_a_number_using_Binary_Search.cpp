#include<bits/stdc++.h>
using namespace std;
#define int long long

double eps = 1e-6;

double multiply(double mid, int n)
{
    double ans == 1;
    for(int i=0; i<n; ++i)
    ans *= mid;
    return ans;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    double x;
    cin>>x;
    int N_th_root;
    cin>>N_th_root;
    double high = x;
    double low = 1;

    while(high - low > eps)
    {
        int mid = (high + low) / 2;
        if(multiply(mid,N_th_root) < x)
        {
            low = mid;
        }
        else{
            high = mid;
        }

        cout<<low<<endl;
    }


    return 0;
}