#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    cin>>a[i];

    int min = *min_element(a.begin()+3,a.end());
    cout<<min<<endl;
    int max = *max_element(a.begin(), a.end());
    cout<< max <<endl;
    int sum = accumulate(a.begin(),a.end(), 0); // 0 = initial sum
    int cnt = count(a.begin(), a.end(), 2); // array te 2 count korbe
    auto element = find(a.begin(),a.end(),2); // find the value 2, return the index;
    reverse(a.begin(),a.end());
    auto sum = [](int x, int y){return x+y;} // lamda function
    cout<<sum(2,3)<<endl; // here sum will act as function
    bool a = all_of(a.begin(), a.end(), [](int x){return x>0;}); // all_of() function return boolean data type acording to a perameter
    // in this case if all element positive then output is true, perameter a amra onno jnokno comparetor function use krte pari
    
    bool b = any_of(a.begin(), a.end(), [](int x){return x>0;}); // any_of() function return boolean data type acording to a perameter
    // in this case if any of element is positive then output is true, perameter a amra onno jnokno comparetor function use krte pari
    
    bool c = none_of(a.begin(), a.end(), [](int x){return x>0;}); // all_of() function return boolean data type acording to a perameter
    // in this case if none of element positive then output is true, perameter a amra onno jnokno comparetor function use krte pari
    
    return 0;
}