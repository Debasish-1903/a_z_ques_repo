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

ll mul(ll a,ll b){
	
	ll ans=(a*b)%mod;
	if(ans<0) ans+=mod;
	
	return ans;
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
	

ll n;
cin>>n;


//nc2-n;

// ll ans=sub(125,130);
// ans=mul(ans,binexp(255,4));
// ans=add(ans,325);




ll ans1=mul(n,n-1);

ans1=mul(ans1,binexp(2,mod-2));
ans1=ans1-n;
if (ans1<0){
	
	ans1+=mod;
}




ll ans2=mul(n,n-1);
ans2=mul(ans2,n-2);
ans2=mul(ans2,n-3);

ans2=mul(ans2,binexp(24,mod-2));
if(ans2<0){
	
	ans2+=mod;
}

ll ans=ans1+ans2+1;

cout<<(ans+mod)%mod<<nl;


//cout<<(ans+mod)%mod<<nl;

	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	
	
	// int _t; cin>>_t;while(_t--)
	
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}