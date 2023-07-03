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


ll n,q,arr[100100];


int check(ll x){
	
	if(x==n-1) return 1;
	
	
	if(arr[x]<arr[x+1]){
		
		return 1;
	}else{return 0;
}
	
	
}




void solve(){
	
	
	cin>>n>>q;
	
	for(ll i=0;i<n;i++){
		
		
		cin>>arr[i];
		
		
	}
	
	
	ll l,r,mid,peak,ans;
	
	l=0;r=n-1;
	ans=-1;
	peak=n;
	
	while(l<=r){
		
		mid=l+((r-l)>>1);
		
		
		if(check(mid)){
			
			peak=mid;
			r=mid-1;
		}else{
			
			l=mid+1;
		}
		
		
	}
	
	
	v a1 ,a2;
	
	for(ll i=0;i<n;i++){
		
		if(i<=peak) a1.push_back(arr[i]);
		else{
			a2.push_back(arr[i]);
		}
		
	}
	
	while(q--){
		
		
		cin>>k;
		
		int lb1=lower_bound(a1,a1,k)-a1;
		int  lb2=lower_bound(a2,a2,k)-a2;
		
		v ans;
		if(a1[lb1]==k){
			ans.push_back(lb1+1);
			
		}else{
			
			ans.push_back(-1);
		}
		
		if(a2[lb2]==k){
			ans.push_back(lb2+1);
			
		}else{
			
			ans.push_back(-1);
		}
		
	for(auto it:ans){
		
		cout<<it<<" ";
	}
	cout<<nl;
	
	
	}
		
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}