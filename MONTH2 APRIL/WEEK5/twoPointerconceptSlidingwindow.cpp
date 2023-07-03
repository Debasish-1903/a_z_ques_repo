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



ll n,k, arr[100100];


void solve(){
	
	cin>>n>>k;
	
	
	for(ll i=0;i<n;i++) cin>>arr[i];
		
		
		// define head , tail, and answer variable
		
		
		ll tail,head, ans;
	
	head=-1; tail=0;ans=0;
	
	//keep window data structure//
	
	ll cnt0=0;
	
	while(tail<n){
		
		// push head as far as possible//
		
		while(head+1<n && //can_we_talke(tail,head+1)
			               cnt0+(arr[head+1]==0?1:0)<=k){
			
			head++;
			
			
			if(arr[head]==0) cnt0++;
			
		}
		
		ans=max(ans,head-tail+1);
		
		
		
		//push tail one step//
		if(head<tail){
			
			tail++;
			
			head=tail-1;
		}else{
			
			if(arr[tail]==0) cnt0--;
			tail++;
			
		}
		
		
		
		
		
		
	}
	
	
	
	cout<<ans;
	
	
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}