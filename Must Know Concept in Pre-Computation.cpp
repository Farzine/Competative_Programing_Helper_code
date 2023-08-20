/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive.
Once all operations have been performed, return the maximum value in the array.

Example

n = 10
queries = [[1,5.3],[4,8,7],[6,9,1]]

Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of k between the indices a and b inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is 10 after all operations are performed.

Function Description

Complete the function arrayManipulation in the editor below.

arrayManipulation has the following parameters:

1. int n - the number of elements in the array
2. int queries[q][3] - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.

Returns
1. int - the maximum value in the resultant array

Input Format

The first line contains two space-separated integers n and m, the size of the array and the number of operations.
Each of the next m lines contains three space-separated integers a, b and k, the left index, right index and summand.

Constraints
3 <= n <=10^7
1 <= m <= 2*10^5
1 <= a <= b <= n
0 <= k <= 10^9

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update the list is 100 100 0 0 0.
After the second update list is 100 200 100 100 100.
After the third update list is 100 200 200 200 100.

The maximum value is 200.
*/


#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int ar[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        ar[a] += c; // c added in a th or query first index
        ar[b+1] -= c; // c subtract in b+1 th index or query last index for prefix sum
    }
    for(int i = 1; i<=n; i++)
    {
        ar[i] += ar[i-1]; // prefix sum
    }

    long long mx = -1;
    for(int i=1; i<=n; ++i)
    {
        if(mx < ar[i])
            mx = ar[i];
    }
    cout<< mx <<endl;
    return 0;
}


