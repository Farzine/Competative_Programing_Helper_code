/*
1. (a+b)%M = ((a%M) + (b%M))%M
2. (a*b)%M = ((a%M) * (b%M))%M
3. (a-b)%M = ((a%M) - (b%M) + M)%M  // M%M = 0, +M is used for remain the modulo in positive
4. (a/b)%M = ((a%M) * ((b^-1)%M)%M
*/

/*
Given a number N. Prints it's factorial.
Constraints
1 <= N <= 100  // for big number we can calculate the factorial but we can not store the factorial
so, print answer modulo M, where M = 47
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   int M = 47;
   long long fact = 1;
   for(int i=2; i<=n; i++)
   {
       fact = ((fact%M)*(i%M))%M; // (fact*i)%M
   }
   cout<<fact<<endl;




   return 0;
}
