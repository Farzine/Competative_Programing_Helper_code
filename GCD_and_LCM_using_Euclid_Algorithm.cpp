#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
4 = 2*2 = 2^2 * 3^0
12 = 2*2*3 = 2^2 * 3^1
LCM of 4 and 12 = 2^2 * 3^1 = 12 [max power of each prime factor]
GCD of 4 and 12 = 2^2 * 3^0 = 4 [min power of each prime factor]
18 = 2*3*3 = 2^1 * 3^2
LCM of 4,12 and 18 = 2^2 * 3^2 = 36 [max power of each prime factor]
GCD of 4,12 and 18 = 2^1 * 3^0 = 2 [min power of each prime factor]
gcd(a,b) * lcm(a,b) = a*b


*/

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cout<<gcd(12,4)<<endl;
    cout<<"lcm of 12 and 4 is: "<<(12*4)/gcd(12,4)<<endl;
    cout<<__gcd(12,4)<<endl;


    return 0;
}