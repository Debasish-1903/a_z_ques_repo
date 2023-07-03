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




 ll add(ll a,ll b){
	
	ll ans=(a+b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

 ll sub(ll a,ll b){
	
	ll ans=(a-b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}

/*ll mul(ll a,ll b){
	
	ll ans=(a*b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
}*/


//v p(1e6);
// void presum(v &a,ll n){
	
	
// 	p[0]=a[0];
// 	for(ll i=1;i<n;i++){
		
		
// 		p[i]=p[i-1]+a[i];
// 	}
	
	
// }






void solve(){
	
	
	ll n,q;
	cin>>n>>q;
	

	
	v a ;
	 for(ll i=0;i<n;i++){
	
	ll x;
		
		cin>>x;
		a.pb(x);
	}
	
	
	
	v p(n);
	p[0]=a[0];
	for(ll i=1;i<n;i++){
		
		
		p[i]=add(p[i-1],a[i]);
	}
	
	while(q--){
	ll l,r;
	cin>>l>>r;
	
	
	ll ans=sub(p[r-1],p[l-2]);
	
	cout<<(ans+mod)%mod<<nl;

}
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}
