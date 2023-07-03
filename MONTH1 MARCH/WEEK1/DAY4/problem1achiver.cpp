#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	int n,m,p;
	
	cin>>n>>m>>p;
	
	
	for(int i=0;i<=n*m;i++){
		
		for(int j=0;j<=m*m;j++){
			
			if(i%m==0){
				
				cout<<'*';
				
			}else{
				
				if(j%m==0){
					
					cout<<'*';
				}else if(i%m==j%m){
					
					cout<<"";
				}else{
					cout<<".";
					
				}
				
				
				
			}
				
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