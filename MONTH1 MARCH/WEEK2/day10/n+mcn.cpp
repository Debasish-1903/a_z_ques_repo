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



vector<ll>fac;


// precomputation of m+n factorials
void pre(){
	
	fac.push_back(0);
	fac.push_back(1);
	for(ll i=2;i<=2*1e5;i++){
		
		ll val=(fac.back()*i)%mod;
		fac.push_back(val);
		
	}
	
	
	
	//cout<<fac[4];
}


ll binexp(ll a, ll b){
	
	
	ll ans=1;
	while(b>0){
		
		if(b%2==1){
			
			ans=(ans*a)%mod;
		}
		
		a=(a*a)%mod;
		b/=2;
		
		
		
	}
	
	return (ans+mod)%mod;
	
}



void solve(){
	
	int n,m;
	cin>>n>>m;
	
// 	ll v1=fac[n];
// ll v2=fac[m];

// cout<<v1<<" "<<v2<<nl<<nl;
	
ll	v1=binexp(fac[n],mod-2);
	
	ll v2=binexp(fac[m],mod-2);

//cout<<v1<<" "<<v2<<nl<<nl;
	
	ll result=(fac[n+m]%mod*v1%mod)%mod;
	result=(result*v2%mod)%mod;
	
	
	cout<<result<<nl;
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	
	
	
	 int _t; cin>>_t;while(_t--)
	pre();
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}