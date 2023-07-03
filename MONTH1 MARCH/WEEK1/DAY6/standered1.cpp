#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	
	int n;
	cin>>n;
	vector<int>a(n);
	int cnt=2;
	int d;
	int maxi =INT_MIN;
	for(int i=0;i<n;i++){
		
		cin>>a[i];
		
	}
	
	
	for(int i=0;i<n-1;i++){
		
		if(2*a[i+1]==a[i]+a[i+2]){
			
			cnt+=1;
			
		}else{
			
			
			
			//i++;
			
			cnt=2;
			
		};
		
		maxi=max(maxi,cnt);
		
	}
	
	
	cout<<maxi;
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}