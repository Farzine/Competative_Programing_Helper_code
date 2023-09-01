#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    map<int, string> m;   // to initialize unordered map = unordered_map<int,int>map;
    m[1] = "abc"; // O(long (n))
    m[0] = "cdc";
    m[2] = "adds";
    m.insert ({3,"afg"});
    map<int,string>::iterator it;
    // for(it = m.begin(); it != m.end(); it++) // for(auto &pr : m )
    // cout<<(*it).first<<" "<<(*it).second<<endl; // cout<<pr.first<<" "<<pr.second<<endl;

    auto t = m.find(3); // O(long (n))
    if(t == m.end())
    cout<<"NO Value"<<endl;
    else cout<<(*t).first<<" "<<(*t).second<<endl;

    m.erase(2);
    print(m);
    if(t !=m.end())
    m.erase(t);

    //m.clear(); //clear the map
    

    return 0;
}