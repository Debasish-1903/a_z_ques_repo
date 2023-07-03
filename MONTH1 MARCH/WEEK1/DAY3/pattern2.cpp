
/*
 a        i       q       y
  b      h j     p r     x z
   c    g   k   o   s   w
    d  f     l n     t v
     e        m       u
      
  
  
  
   */





#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print_logic(int i,int j,int n){
	char ch1= 'a';
	char ch2=' ';
	if(i==j%8||i%8==j%8||(i+j)%8==0){
		
		cout<<char(ch1+j)<<" ";
	}else{
		
		cout<<ch2<<" ";
	}
}

void print_col(int i,int n){
	
	for(int j=0;j<26;j++){
		
		print_logic(i,j,n);
	}
	cout<<endl;
	
}

void print_row(int n){
	
	for(int i=0;i<17;i++){
		
		print_col(i,n);
	}
	
}

void solve(){
	
	int n;
	print_row(n);
	
	
	
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}