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



ll n,k,arr[100100];

int check(ll x){
	
	vector<ll>vc(n+1);
	ll cnt1=0;

	for(ll i=1;i<=n;i++){
		
		cnt1+=arr[i];
		
		vc[i]=cnt1;
		
		
	}
	
	ll cnt0=0;
	
	for(ll i=1;i<=n;i++){
		
		
		
		cnt0=x-(vc[x+i]-vc[i]);
		
		
		if(cnt0<=k)return 1;
		else return 0;
		
		
		
	}
	
	
	
	
	
	
	
	
}






void solve(){
	
cin>>n>>k;

for(ll i=1;i<=n;i++){
	
	cin>>arr[i];
	
}
	
ll l,h,mid,ans;


l=1;

h=n;

ans=1;


while(l<=h){
	
	mid=l+((h-l)>>1);
	
	if(check(mid)){
		
		
		ans=mid;
		
		l=mid+1;
	}else{
		
		h=mid-1;
	}
	
	
	
	
	
	
}	
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}