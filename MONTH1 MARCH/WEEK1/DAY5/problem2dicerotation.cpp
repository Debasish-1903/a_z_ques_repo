#include<bits/stdc++.h>
using namespace std;
#define ll long long int




void solve(){
    
    int a[7];
for(int i=1;i<=6;i++){
    
    cin>>a[i];
  
}

string s;
cin>>s;

for(int i=0;i<s.size();i++){
    
    /*
a[1]=top;a[6]=bottom;
a[2]=south;a[5]=north;
a[3]=east;a[4]=west;


*/
 
    if(s[i]=='N'){
        int top=a[1];
        
        a[1]=a[2];
        a[2]=a[6];
        a[6]=a[5];
        a[5]=top;
       
    }else if(s[i]=='S'){
        int top=a[1];
        a[1]=a[5];
        a[5]=a[6];
        a[6]=a[2];
        a[2]=top;
        
    }else if(s[i]=='E'){
        
        int top=a[1];
        a[1]=a[4];
        a[4]=a[6];
        a[6]=a[3];
        a[3]=top;
        
        
    }else{
        int top=a[1];
        a[1]=a[3];
        a[3]=a[6];
        a[6]=a[4];
        a[4]=top;
       
        
    }
    
    
    
}
	

cout<<a[1]<<'\n';	

	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int _t; cin>>_t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}