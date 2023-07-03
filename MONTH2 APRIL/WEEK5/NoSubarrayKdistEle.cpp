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
map<int,int>freq;

ll distinct=0;

int check(ll x){
	
	if(distinct+(freq[x]==0?1:0)<=k){
		 
		 return 1;
	}else{
		return 0;
	}
	
	
}

ll insert_head(ll x){
	
	if(freq[x]==0){
		
		distinct++;
		freq[x]++;
	}
	
	
}

ll remove_tail(ll x){
	
	freq[x]--;
	
	if(freq[x]==0) distinct--;
	
	
}



void solve(){
	
	cin>>n>>k;
	
	
	for(ll i=0;i<n;i++){
		
		cin>>arr[i];
	}
	
	
	ll head,tail,ans;
	
	head=-1;
	tail=0;ans=0;
	
	
	while(tail<n){
		
		//push head as far as possible
		while(head+1<n&& check(arr[head+1])){
			
			head++;
			
			insert_head(arr[head]);
		}
		
		
		ans+=(head-tail+1);
		
		
		
		if(head<tail){
			
			tail++;
			head=tail-1;
		}else{
			
			tail++;
			
			remove_tail(arr[tail]);
		}
		
		
		
	}
	
	
	cout<<ans<<nl;
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}