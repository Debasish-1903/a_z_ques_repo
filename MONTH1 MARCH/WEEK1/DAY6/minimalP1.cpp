#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){

int q;
ll n;
cin>>q>>n;

int cnt=0;
int cnt1=0;


for(ll i=1;i*i<=n;i++){
    
    if(q==1){
        
        if(i*i==n){
            cnt=1;
            
        }
        
        
    }else if(q==2){
        
        if(i*i*i==n){
            
            cnt1=1;
        }
    }
    
    
    
}
//cout<<cnt<<endl;
//cout<<cnt1;

if(q==1){
    
    if(cnt>0){
        cout<<"YES"<<'\n';
    }else if(cnt==0){
        
        cout<<"NO"<<'\n';
    }
   
}else if(q==2){
    
     if(cnt1>0){
        cout<<"YES"<<'\n';
    }else if(cnt1==0){
        
        cout<<"NO"<<'\n';
    }
    
    
}




	
	}
	
	
	
	


signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	 int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}