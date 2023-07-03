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
	
	ll mindist=0;
	ll stu=1;
	
	for(ll i=0;i<n;i++){
		
		//if(arr[i]<x)return 0;
		
		if(arr[i]>=mindist+x){
			
			stu++;
		}
		
		
		
		
	}
	
	if(stu>k)return 1;
	else return 0;
	
	
	
}




void solve(){
	
	
	cin>>n>>k;

	for(ll i=0;i<n;i++){
		
		
		cin>>arr[i];
		
	}
	
	
	sort(arr,arr+n);
	
	
	ll mid,l,r,ans;
	
	
	l=1;
	r=arr[n-1]-arr[0];
	
	ans=-1;
	
	while(l<=r){
		
		mid=l+((r-l)>>1);
		
		if(check(mid)){
			ans=mid;
			
			r=mid-1;
			
			
		}else{
			
			l=mid+1;
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