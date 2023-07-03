/*Good Pairs AZ101

Time-Limit: 2 sec Score: 1.00/100
Difficulty : 
 Memory: 256 MB Accepted Submissions: 100
Description

You are given two arrays A and B, both of size N. A pair is called good if i < j and Ai + Aj > Bi + Bj. Find the number of good pairs.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N - the length of the array. 

The second line of each test case contains N space-separated integers.

The third line of each test case contains N space-separated integers.


Output Format

For each test case, print the number of good pairs.


Constraints

1≤ T ≤ 106

1≤ N ≤ 106

1≤ Ai ≤ 109

It is guaranteed that the sum of N over all test cases does not exceed 106.


Sample Input 1

3
4
2 3 5 4
2 1 5 6
3
1 4 6
2 3 3
5
5 6 1 1 2
1 9 2 4 1

Sample Output 1

2
2
4

Note

For the first test case, following pairs satisfy the given inequality: (2+3) > (2+1) and (3+5) > (1+5)

For the second test case, following pairs satisfy the given inequality: (1+6) > (2+3) and (4+6) > (3+3)

For the third test case, following pairs satisfy the given inequality: (5+6) > (1+9), (5+1) > (1+2), (5+1) > (1+4) and (5+2) > (1+1)*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define mod 1000000007
#define inf 1e9
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define f first
#define s second
#define nl "\n"
#define pi pair<int,int>
#define v vector<long long int>
#define vp vector<pair<int,int>>
#define vvl vector<vector<long long int>>
#define rep(n) for(int i=0 ; i<n ; i++)
#define rei(i) for(int i=n ; i>0 ; i--)
#define prio priority_queue
#define np next_permutation
#define N 200100

#define yes "YES"
#define no "NO"


 
void solve(){
	ll n;
	cin>>n;
	
	ll arr[n];
	ll brr[n];
	
	ll crr[n];

	for(int i=0;i<n;i++){
	    
	    cin>>arr[i];
	     
	}
	
	for(ll i=0;i<n;i++){
	    
	    cin>>brr[i];
	    
	    crr[i]=arr[i]-brr[i];
	}
	

	sort(crr,crr+n);
	
	ll cnt=0;
	for(ll i=0;i<n;i++){
	
	ll x=-crr[i]+1;
	 if(crr[i]<=0){
	   auto it=lower_bound(crr,crr+n,x)-crr;
	     
	     if(it!=n){
	         
	         cnt+=n-it;
	     }
	     
	     
	     
	 } else{
	     
	     cnt+=n-1-i;
	      
	 }
	 
	}
	
cout<<cnt<<nl;
	

	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}