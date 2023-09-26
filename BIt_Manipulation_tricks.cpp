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

    // checking the number odd or even
    // for(int i=0; i<8; i++)
    // {
    //     printBinary(i);
    //     if(i&1)
    //     {
    //         cout<<"Odd\n";
    //     }
    //     else cout<<"Even\n";
    // }
    ////////////////////////////////////////////

    // use bit manipulation in multiplication and division
    // int n = 5;
    // cout<<(n>>1)<<endl; // divition with 2
    // cout<<(n<<1)<<endl; //multiplication with 2
    ////////////////////////////////////////////

    // convert upper case to lower case letter using bit manipulation
    // char A = 'A';
    // char a = A | (1<<5);
    // cout<< a << endl;
    // cout<<char(a&(~(1<<5)))<<endl; // lower case to upper case
    // another way
    // cout<<char('A' | ' ')<<endl; // convert upper to lower case
    // cout<<char('a' & '_')<<endl; // convert lower to upper case
    //////////////////////////////////////

    // checking kono number 2 ar upor power dile pawa jai ki na
    int n = 16;
    if(n & (n-1))
    {
        cout<<"not power of 2";
    }
    else cout<<"Power of 2";

    return 0;
}