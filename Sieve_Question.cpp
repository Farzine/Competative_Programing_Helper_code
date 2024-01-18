/*
Here is another task for you, prepared by Monk himself. So, this is how it goes :

Given an integer array A of size N, Monk needs you to answer T queries for him. In each query, he gives you 2 integers P and Q. In response to each of these queries, you need to tell Monk the count of numbers in array A. that are either divisible by P, Q, or both.

Can you cope with this ?

Video approach to solve this question: here

Input Format :

The first line contains a single integer N denoting the size of array A. The next line contains N space separated integers, where the 
 integer denotes 
.

The next line contains a single integer T denoting the number of queries Monk poses to you. Each of the next T lines contains 2 space separated integers P and Q.

Output Format :

For each query, print the answer on a new line.


Sample Input
6
2 3 5 7 4 9
2
4 5
3 7
Sample Output
2
3
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+2;

int hash[N];
int multiple_count[N];

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        hash[x]++;
    }

    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            multiple_count[i] += hash[j];
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int p,q;
        cin>>p>>q;

        int lcm = (p*q)/__gcd(p,q);
        int ans = multiple_count[p] + multiple_count[q] ;
        if(lcm < N)
        {
            ans -= multiple_count[lcm];
        }
        cout<<ans<<endl;
    }



    return 0;
}