#include<bits/stdc++.h>
using namespace std;
#define int long long

const int  MOD = 1e9+7;

/*

2^16 = 2^8 * 2^8
2^8 = 2^4 * 2^4
2^4 = 2^2 * 2^2
2^2 = 2^1 * 2^1

3^15 = 3^7 * 3^7 * 3
3^7 = 3^3 * 3^3 * 3
3^3 = 3^1 * 3^1 * 3
3^1 = 3^0 * 3

f(a,b) = a^b
f(a,b) = f(a,b/2) * f(a,b/2) [if b is even]
f(a,b) = f(a,b/2) * f(a,b/2) * a [if b is odd]



*/


int binary_exponentiation(int a, int b)
{
    if(b==0)
    {
        return 1;
    }

    int res = binary_exponentiation(a,b/2);
    
    if(b&1) // check b is odd or not
    {
        return (a* ((res * res)%MOD))%MOD;
    }
    else
    {
        return (res * res)%MOD;
    }
   
    
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cout<<binary_exponentiation(2,13)<<endl;



    return 0;
}