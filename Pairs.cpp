#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    pair<int,string>p;  
    p = make_pair(1,"abc");
    p = {2,"abcde"}; // or you can initial like this
    cout<<p.first <<" "<<p.second<<endl; 
    p.first = 4;
    p.second = "hhihi";

    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    swap(p_array[0],p_array2);

    for(int i=0; i<3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
 
    return 0;
}