#include<bits/stdc++.h>
using namespace std;
#define int long long

/*
fruit       index
1.Apple       0
2.orange      1
3.bannana     2
4.lichi       3

mone kori 3 jon manuser kase aisob fruit ase jader index 
dawa ase, tader modha common fruit gula ber krte hbe

fruit index       binary representations
1. 2,3       -->     1100     -----> 12 |
2. 0,1,2     -->     0111     -----> 7  |---> amra array take akta number a covert korlam
3. 1,3       -->     1010     -----> 10 |

akhn ai converted number gular modha & operation korle
amra ader moddhookar common fruit index gula pabo

ai technique k bole bit masking[long long data set ar khetre ata use kora jai na,fruit]
*/

/*
Consider this problem: There are N≤5000 workers. Each worker is available during some 
days of this month (which has 30 days). For each worker, you are given a set of numbers, 
each from interval [1,30], representing his/her availability. You need to assign an important 
project to two workers but they will be able to work on the project only when they are both available. 
Find two workers that are best for the job — maximize the number of days when both these workers are available.

sample input:

3 --> worker number
4 ---> joto din kaj kore ter number
1 4 7 9 --> joto tomo dine kaj kore ter index
6
2 9 1 7 25 28
3
1 23 4

*/


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>masks(n,0); // masks array for store converted number
    for(int i=0; i<n; i++)
    {
        int num_workers;
        cin>>num_workers;
        int mask = 0;
        for(int j=0; j<num_workers; j++)
        {
            int day;
            cin>> day;
            mask = (mask | (1<<day)); // put day into binary position
        }
        masks[i] = mask; // converted number gula masks array te raktese
    }
   int max_days =0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int intersection = (masks[i]&masks[j]); // common day converted number ber krlam
            int common_days = __builtin_popcount(intersection); //kono number ar binary representation a kto gula 1 ase ta ber krar function

            max_days = max(max_days, common_days);
            cout<<"common days between "<<i<<" "<<"and "<<j<<" is "<<common_days<<endl;   
        }
    }
    cout<<max_days<<endl;



    return 0;
}