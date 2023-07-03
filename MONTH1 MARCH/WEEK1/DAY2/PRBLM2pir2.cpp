/*
given a number r calculate area of a circle of radious r;
round off the ans to 9 decimal places

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define endl '\n'

void solve(){
	
	long double pi =acos(-1);
	long double r=3;
	
	cout<<fixed<<setprecision(10)<<pi*r*r;
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}