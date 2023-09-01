#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0; i<n; i++) cin>>a[i];
		int minn = INT_MAX;
		int ct=0;
		for (int i = n-1; i >=0; i--)
		{
			if(a[i]>minn)
			ct++;
			minn = min(minn,a[i]);
		}
		cout<<ct<<endl;
		
	}

	return 0;
}