#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

     // numbers are ordered in binary on bitset array
    // bitset<size of how many bit to represent the number> name of variable
     
    bitset<32> bset;
    cout<<bset<<endl; // output 00000000000000000000000000000000
    bset.set(); // protita bit k 1 kore dai
    cout<<bset<<endl; // output 11111111111111111111111111111111
    bset.reset(); // sob bit k 0 kore dibe
    cout<<bset<<endl; // output 00000000000000000000000000000000 
   
    bitset<32> bset1(5); 
    cout<<bset1<<endl; // 00000000000000000000000000000101 output
    
    bitset<32> bset2(string("101"));
    cout<<bset2.to_ullong()<<endl; // output 5...binary to decimal converted

    bitset<32>bset3(10);
    cout<<bset3.count()<<endl; // bitset a 10 ar vitor koyta 1 ase ta bole dibe 
    bset3.flip(); // 1 ke 0, ar 0 k 1 kore dibe bit set a
    cout<<bset3<<endl; // output 11111111111111111111111111110101

    // bitset ulta pase indexing kore
    cout<<bset3[0]<<endl; //output 1
    
    return 0;
}