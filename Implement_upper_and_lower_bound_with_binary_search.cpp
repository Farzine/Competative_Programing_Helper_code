#include<bits/stdc++.h>
using namespace std;
#define int long long

int lower_bound(vector<int>&v, int element)
{
    int low = 0;
    int high = v.size()-1;
    int mid;
    while(high - low > 1)
    {
        mid = (high+low)/2;
        if(v[mid] < element)
        {
            low = mid +!;
        }
        else{
            high = mid;
        }
    }
    if(v[low] >= element)
    {
        return low;
    }
    if(v[high] >= element)
    {
        return high;
    }
    return -1;
}

int upper_bound(vector<int>&v, int element)
{
    int low = 0;
    int high = v.size()-1;
    int mid;
    while(high - low > 1)
    {
        mid = (high+low)/2;
        if(v[mid] <= element)
        {
            low = mid +!;
        }
        else{
            high = mid;
        }
    }
    if(v[low] > element)
    {
        return low;
    }
    if(v[high] > element)
    {
        return high;
    }
    return -1;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }   

    int element;
    cin>>element;

    int lowerBound = lower_bound(v,element);
    cout<< v[lowerBound]<<endl;

    int upperBound = upper_bound(v,element);
    cout<<v[upper_bound]<<endl;


    return 0;
}