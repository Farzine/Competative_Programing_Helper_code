#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>>subsets;

void generate(vector<int>&subset, int i, vector<int>&nums)
{
     if(i == nums.size())
     {
        subsets.push_back(subset);
        return;
     }

     //'i'th element not in subset
     generate(subset, i+1, nums);

     // considering 'i' th element in subset
     subset.push_back(nums[i]);
     generate(subset, i+1, nums);

    //backtracking, change k undo kora 
     subset.pop_back();
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; ++i)
    {
       cin>>nums[i]; 
    }

    vector<int>empty;
    generate(empty,0,nums);

    for( auto subset : subsets)
    {
        for(auto element : subset)
        {
            cout<<element<<" ";
        }
        cout<<"\n";
    }

    return 0;
}