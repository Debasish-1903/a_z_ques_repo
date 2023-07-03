#include<bits/stdc++.h>  //lower bound//  O(log n)
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


ll arr[100100],p,n;

int check(ll x){
	
	if(arr[x]>=p){
		
		return 1;
	}else{
		
		return 0;
	}
	
	
}



void solve(){
	
	cin>>n>>p;
	
	
	for(ll i=0;i<n;i++){
		
		cin>>arr[i];
	}
	
	ll l,r,ans,mid;
	
	l=0;r=n-1;ans=n;
	
	
	
	while(l<=r){
		mid=l+(r-l)/2;
		
		if(check(mid)>=1){
		
		ans=mid;
		
		r=mid-1;
	     }else{
			
		l=mid+1;	
			
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

//O(log n)