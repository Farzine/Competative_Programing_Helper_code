#include<bits/stdc++.h>
using namespace std;
#define int long long


/*
finding the number of divisors of a number
sum of divisors of a number
count of divisors of a number
*/

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int count = 0;
    int sum = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<n/i<<endl;
            count++;
            sum+=i;
            if(i!=n/i)
            {
                count++;
                sum+=(n/i);
            }
        }
    }

    cout<<"count of divisors of "<<n<<" is: "<<count<<endl;
    //time complexity O(sqrt(n))

    /*
    using prime factorization, we can find the number of divisors of a number
    in O(log(n)) time complexity

    suppose n = 36
    prime factorization of 24 = 2^3 * 3^1
    so, number of divisors of 24 = (3+1)*(1+1) = 8
    1,2,3,4,6,8,12,24
    sum of divisors of 24 = (1+2+3+4+6+8+12+24) = 60
    sum of divisors of 24 = ((2^4-1)/(2-1)) * ((3^2-1)/(3-1)) = 60
    
    */

 

    return 0;
}