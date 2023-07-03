#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define nl "\n"

ll gcd(ll a, ll b){
	
	
	if(a==0){
		
		return b;
	}else{
		
		
		 return gcd(b%a,a);
	}
	
	
}



void solve(){
	
	ll a,b,c;
	
	cin>>a>>b>>c;
	
ll d=gcd(a,b);

//cout<<c<<" "<<d<<" "<<c%d<<nl;
	
	if(c%d==0){
		//cout<<c%d<<nl;
		
		cout<<"YES"<<nl;
	}else{
		
		
		cout<<"NO"<<nl;
	}
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}