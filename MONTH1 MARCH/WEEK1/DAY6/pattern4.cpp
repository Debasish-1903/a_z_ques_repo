#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	
	int n1,m1,n,m;
	
	cin>>n1>>m1;
	
	
	n=n1;
	m=m1/3;
	
	
	int x=n/2;
	int y=m/2;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			if(i==x){
				
				if(j==y){
					
					
					cout<<"LCO";
				}else if(j==y-1){
					
					cout<<"-WE";
				}else if(j==y+1){
					
					cout<<"ME-";
				}else{
					
					
					
					cout<<"---";
				}
				
				
				
				
				
				
			}else{
				
				if((i+j)==x||i-j==x||j-i==x){
					
					// if((i+j)==x){
					 cout<<".|.";
					 
					 
					 
					
			 	}
			 
			else
				
				
				{
					
					cout<<"---";
				}
				
				
			
			
		}
		
		
		
	}
	
	
		cout<<endl;
	
}
}


signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}