#include<bits/stdc++.h>
using namespace std;
#define int long long


// 1 0 --> 1
// 0 1 --> 1
// 0 0 --> 0
// 1 1 --> 0
// x^X == 0
// x^0 == x

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


    int a = 4, b= 6;

    // swaping value with xor
    a = a^b;
    b = b^a;
    a = a^b;

    cout<<a<<" "<<b<<endl;

    /*
    Given array a of n integers. All integers
    are present in event count except one.
    Find that one integer which has odd count
    in O(N) time complexity and O(1) space;
    N < 10^5 and a[i] < 10^5
    */

   // amra jodi sob number ar jor nei tahle event count
   // nuumber sob out hobe ar shudhu odd count number ta thakbe

   int n;
   cin>>n;
   int x,ans=0;
   for(int i=0; i<n; i++)
   {
    cin>>x;
    ans ^= x;
   }
   cout<<ans;

    return 0;
}