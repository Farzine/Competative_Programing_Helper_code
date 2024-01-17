#include<bits/stdc++.h>
using namespace std;


const int N=1e7+5;
vector<bool> isPrime(N,true);
// finding lowest prime and highest prime factor of a number
vector<int> lowest_prime_factor(N,0);
vector<int> highest_prime_factor(N,0);


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(isPrime[i])
        {
            lowest_prime_factor[i] = highest_prime_factor[i] = i;
            
            for(int j=2*i;j<=N;j+=i)
            {
                isPrime[j]=false;
                highest_prime_factor[j]=i;
                if(lowest_prime_factor[j]==0)
                {
                    lowest_prime_factor[j]=i;
                }
            }
        }
    }

    int n;
    cin>>n;
    cout<<"Lowest Prime Factor: "<<lowest_prime_factor[n]<<endl;
    cout<<"Highest Prime Factor : "<<highest_prime_factor[n]<<endl;

    // storing all prime factors of a number
    
    // vector<int> prime_factors;
    // while(n>1)
    // {
    //     int lpf=lowest_prime_factor[n];
    //     while(n%lpf==0)
    //     {
    //         prime_factors.push_back(lpf);
    //         n/=lpf;
    //     }
    // }
    // for(auto x:prime_factors)
    // {
    //     cout<<x<<" ";
    // }



    // counting prime factors of a number
    map<int,int> prime_factor_count;
    while(n>1)
    {
        int lpf=lowest_prime_factor[n];
        while(n%lpf==0)
        {
            prime_factor_count[lpf]++;
            n/=lpf;
        }
    }
    for(auto x:prime_factor_count)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}