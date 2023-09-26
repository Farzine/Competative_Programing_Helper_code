#include<bits/stdc++.h>
using namespace std;
#define int long long

void printBinary(int num){
    for(int i=10; i>= 0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    // bit is set then value of bit is = 1;
    //bit is unset then value of bit is = 0; 

    printBinary(9); // 00000001001
    int a = 9;
    int i = 3;
    if((a & (a<<i)) != 0) // checking  i th bit of 9 set or not set
    {
        cout<<"set bit"<<endl;
    }
    else{
        cout<<"not set bit"<<endl;
    }
    // output = set bit

    //print the invert of the bits
    printBinary(~a); // 11111110110

    // bit set
    printBinary(a | (1<<2)); // set bit to the 2 th position
    // output 00000001101

    // bit unset
    printBinary(a & (~(1<<3))); // output 00000000001

    // set bit count
    cout<<__builtin_popcount(a); // finding number of 1 in bitset

    return 0;
}


