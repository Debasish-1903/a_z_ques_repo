#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define  endl '\n'

void solve(){
	ll a,b;
	cin>>a>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<a<<" "<<b<<endl;
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int t; cin>>t;while(t--)
		solve();
	
	
	cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}