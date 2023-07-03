#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	int n,m,p;
	
	cin>>n>>m>>p;
	
	ll a[n][m];
	ll b[m][p];
	
	vector<int,int>multi(n,p,0);
	

	
	
	
	for(int i=0;i<n;i++){
		
		
		for(int j=0;j<m;j++){
			
			cin>>a[i][j];
			
			
		}
	}
	
for(int i=0;i<m;i++){
		
		
		for(int j=0;j<p;j++){
			
			cin>>b[i][j];
			
			
		}
	}
	
	
	for(int i=0;i<n;i++){
		
		
		for(int j=0;j<p;j++){
			
		for(int k=0;k<m;k++){
			
			multi[i][j]+=a[i][k]+b[k][j];
			
		}
			
			
		}
	}
	
	
	for(int i=0;i<n;i++){
		
		
		for(int j=0;j<m;j++){
			
			cout<<multi[i][j];
			
			
		}
		
		cout<<'\n';
	}
	
		
	
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}