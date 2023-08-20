/*
Given array of N integers. Given Q queries and in each query given L and R print sum of
array elements from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int prefix_sum[N];

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

   int n;
   cin>> n;
   for(int i=1; i<=n; i++)
   {
       cin>>a[i];
       prefix_sum[i] = prefix_sum[i-1] + a[i];
   }

    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>> l>> r;
        cout<< prefix_sum[r] - prefix_sum[l-1] <<endl;
    }

   return 0;
}


/*
Given 2d array a of N*N integers. Given Q queries and in each query given a, b, c and d
print sum of square represented by (a,b) as top left point and (c,d) as bottom right point

// borger korner 2 bindur point dawa ase (a,b) ar (c,d)//

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
long long prefix_sum[N][N];

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>> n;
    for(int i = 1; i<=n; ++i)
    {
        for(int j = 1; j<=n; ++j)
        {
            cin>> arr[i][j];
            prefix_sum[i][j] = arr[i][j] + prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1];
        }
    }
   int q;
   cin>>q;
   while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<prefix_sum[c][d] - prefix_sum[a-1][d] - prefix_sum[c][b-1] + prefix_sum[a-1][b-1]<<endl;
    }


   return 0;
}
