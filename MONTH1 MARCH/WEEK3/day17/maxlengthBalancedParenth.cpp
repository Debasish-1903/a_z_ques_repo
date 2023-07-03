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
//#define s second
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




 /*ll add(ll a,ll b){
	
	ll ans=(a+b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

 ll sub(ll a,ll b){
	
	ll ans=(a-b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

ll mul(ll a,ll b){
	
	ll ans=(a*b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}*/


void solve(){
	
	string str;
	cin>>str;
	
	int n=str.length();
	
	map<int,int>firstseen;
	map<int,int>lastseen;
	
	int depth=0;
	
	firstseen[0]=-1;
	lastseen[0]=-1;
	
	int ans[n];
	
	
	
	for(int i=0;i<n;i++){
		
		if(firstseen.find(depth)==firstseen.end()){
			
			firstseen[depth]=i;
		}
		
		lastseen[depth]=i;
		
		
		if(str[i]=='('){
			
			depth++;
			ans[i]=0;
		}else{
			
			depth--;
			if(lastseen.find(depth-1)!=lastseen.end()){
				
				ans[i]=i-(lastseen[depth-1]);
				
			}else{
				
				ans[i]=i-firstseen[depth];
			}
			
		}
		
	if(ans[i]%2!=0)	ans[i]=0;
		
		
	}
	
	//int maxi=0;
	int result=0;
	
	for(int i=0;i<n;i++){
		
		
	//	result+=ans[i];
	
	cout<<ans[i]<<" ";
		
		
	}
	
	cout<<nl;
	
//	cout<<n-result<<nl;
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}