#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	
	ll x1,y1,x2,y2,x,y;
	
	cin>>x1>>y1>>x2>>y2;
	
	x=abs(x1-x2);
	y=abs(y1-y2);
	
	double euclid,manhattan;
	
	euclid=sqrt((x*x)+(y*y));
	
	manhattan=x+y;
	
	
	cout<<fixed<<setprecision(7)<<euclid<<" "<<fixed<<setprecision(7)<<manhattan<<"\n";
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}
