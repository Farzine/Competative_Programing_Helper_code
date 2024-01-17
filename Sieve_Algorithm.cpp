#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e7+5;
vector<bool> isPrime(N,true);


//time complexity: O(n*log(log(n)))
// Q = 1e7, N = 1e7
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        if(isPrime[x])
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not Prime"<<endl;
        }
    }
    



    return 0;
}