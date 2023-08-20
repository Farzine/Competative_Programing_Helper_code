/*
Given T test case and in each test case a number N. Prints its factorial for each test case%M
where M = 10^9+7;

constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact [N];


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
    fact[0] = fact[1] = 1;
    for(int i=2; i< N; ++i)  // Pre-computation techniques
    {
        fact[i] = fact[i-1] * i;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }


   return 0;
}


// Hashing
/*
Given array of a N integers. Given 'Q' queries and in each query given a number X, print count of that number in array

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N]; // declaring hashing array

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        hsh[a[i]]++;  //hashing
    }

    int q;
    cin>> q;
    while(q--)
   {
       int x;
       cin>> x;
       cout<< hsh[x] <<endl;
   }



   return 0;
}

