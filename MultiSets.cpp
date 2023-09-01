#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(multiset<string>&s)
{
    for(auto i : s)
    cout<<i<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    multiset<string> s; // store multiple element in sorted order

    s.insert("abc");
    s.insert("Jhj");
    s.insert("fkj");
    s.insert("abc");

    // auto i = s.find("abc");
    // if(i != s.end())
    // s.erase(i);

    s.erase("abc"); // sob abc a delete hbe

    print(s);   



    return 0;
}