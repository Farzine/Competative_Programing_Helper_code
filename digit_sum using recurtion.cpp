#include<bits/stdc++.h>
using namespace std;

// digit sum
// digit_sum(n) -> digit_sum(n/10) + last_digit
// 1234 -> 4 + digit_sum(123)
int digit_sum ( int n)
{
    if(n == 0) return 0;
    return digit_sum(n/10) + n%10;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

   int n;
   cin>>n;
   cout<<digit_sum(n);


   return 0;
}
