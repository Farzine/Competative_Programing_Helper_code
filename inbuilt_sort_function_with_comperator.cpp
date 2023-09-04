#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(int a[], int n)
{
    for(int i=0; i<n; i++)
    cout<<a[i]<< " ";
    cout<<endl;
}

bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first != b.first) 
    {
        return a.first>b.first
        // jodi pair ar first element soman na hoy tahle swap korbe
        // pair ar first element k deccreasing order a save korbe
    }
    // pair ar second element k increasing order a sort korbe
        if(a.second < b.second)
    return a.second<b.second;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a+0, a+n); // range of sorted array
    print(a,n);   
    
    vector<pair<int,int>>p(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first<<a[i].second;
    }

    sort(p.begin(), p.end(),cmp);
    sort(p.begin(), p.end(),greater<pair<int,int>>()); // inbuilt comparetor, sorted in decreasing order
    
    return 0;
}