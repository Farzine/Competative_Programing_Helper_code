#include<bits/stdc++.h>
using namespace std;
#define int long long


// to know well this see the bitmasking code

/*
sample input:
3 --> element number
2 4 5--> elements of the set
you have to find out the subsets array of the set

*/

vector<vector<int>> subsets(vector<int>&nums)
{
    int n = nums.size();
    int subset_count = (1<<n); // its mean 2^n , which is the number of subsets array

    // bit masking
    vector<vector<int>>subsets;
    for(int mask =0; mask<subset_count; mask++)
    {
        vector<int>subset;
        for(int i=0; i<n; i++)
        {
            if((mask & (1<<i)) !=0) // itss mean i'th bit == 1
            {
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}
// time complexity O(n*(2^n))


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    auto all_subsets = subsets(v);
    for(auto subset : all_subsets)
    {
        cout<<"[ ";
        for( int element: subset){
            cout<<element<<",";
        }
        cout<<"]"<<endl;
    }

    return 0;
}