// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define nl "\n"

// ll mod =1000000007;


// ll power(ll a, ll b){
	
// 	ll temp=power(a,b/2);
	
// 	temp*=temp%mod;
	
// 	if(b%2==1){
		
		
// 		temp*=a%mod;
// 	}
	
	
// 	return temp%mod;

// }






// void solve(){
	
	
// 	ll a,b,c,p;
	
// 	cin>>a>>b>>c>>p;
	


// 	cout<<power(power(a%p,b)%p,c)%p;
	
	
	
// 	//cout<<d<<nl;
	
	
	
	
// }

// signed main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);cout.tie(0);
	
// 	// int _t; cin>>t;while(_t--)
// 		solve();
	
	
// 	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
// }


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

ll biexp(ll a, ll b){
	
	
	ll ans=1;
	
	if(a==0&& b==0){
		
		
		return 1;
	}else{
	while(b){
		
		if(b%2==1){
			
			
			return (ans*a)%mod;
		}
		
		a=(a*a)%mod;
		
		b/=2;
		
		
		
		
	}}
	
	
	
}


void solve(){
	
	
	ll a,b,c,p;
	
	cin>>a>>b>>c>>p;
	
	ll v1=biexp(a,b)%p;
	
    v1=biexp(v1,c)%p;
    
    
	
	
	
	cout<<v1<<nl;
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}

