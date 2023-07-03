#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	ll n;
	cin>>n;
	
	vector<ll>a(n);
	//ll x;
	
	for(ll i=0;i<n;i++){
		cin>>a[i];
		
	}
	
	
	vector<ll>seen(n,0);
	vector<ll>v;

	
	for(ll i=0;i<n;i++){
		
		if(seen[i]==0){
		
		ll cnt=0;
		
		
		
			for(ll j=i;j<n; j++){
			
				
				
				 if(a[i]==a[j]){
					
					cnt+=1;
					seen[j]=1;
				}
				
			}
			if(cnt%2!=0){
				v.push_back(a[i]);
				
			}
			
			
			
	}
	
	
	
}
for(auto it:v){
	
	cout<<it<<" ";
}
cout<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}