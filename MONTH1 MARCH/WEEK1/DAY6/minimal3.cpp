#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	int x1,y1,x2,y2,;
	cin>>x1>>y1>>x2>>y2;
	
	int a=(x2-x1)*(y2-y1);
	
	int x3,y3,x4,y4;
	cin>>x3>>y3>>x4>>y4;
	
	
	int b=(x4-x3)*(y4-y3);
	
	
	int inter,uni,x5,y5,x6,y6;
	
	int x5=max(x1,x3);
	
	int x6=min(x2,x4);
	int y5=max(y1,y3);
	int y6=min(y2,y4);
	
	
	inter=max(0,(x6-x5))*max(0,(y6-y5));
	
	uni=a+b+-inter;
	
	
	cout<<inter<<" "<<uni<<'\n';
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}