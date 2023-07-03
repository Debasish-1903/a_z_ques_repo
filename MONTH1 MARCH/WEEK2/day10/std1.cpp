/*#include<bits/stdc++.h>
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
}


void solve(){
	
	
	
	ll n;
	cin>>n;
	
	ll ans=(((n%mod)*((n-1)%mod)))%mod;
	ans=(((ans%mod)*((n-2)%mod)))%mod;
	ans=(((ans%mod)*((n-3)%mod)))%mod;
	ans=(ans/24)%mod;
	
	cout<<(ans+mod)%mod<<nl;
	
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(){
    ll n;
    cin >> n;
    ll ans = ((n % mod) * ((n - 1) % mod) ) % mod;
    ans=((ans % mod) * ((n - 2) % mod) ) % mod;
    ans=((ans % mod) * ((n - 3) % mod) ) % mod;
    
    
    ans = (ans * 41666667) % mod; // 41666667 = (1/24) mod 1e9 + 7
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
   // cin >> t;
   // while(t--)
        solve();
    return 0;
}
