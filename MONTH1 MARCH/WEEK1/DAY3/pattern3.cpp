/*
3
3 4
4 2
3 3

*************
*..*..*..*..*
*..*..*..*..*
*************
*..*..*..*..*
*..*..*..*..*
*************
*..*..*..*..*
*..*..*..*..*
*************
*******
*..*..*
*..*..*
*******
*..*..*
*..*..*
*******
*..*..*
*..*..*
*******
*..*..*
*..*..*
*******
**********
*..*..*..*
*..*..*..*
**********
*..*..*..*
*..*..*..*
**********
*..*..*..*
*..*..*..*
**********



*/




#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print_logic(int i,int j,int n,int m){
	
	if(i%3==0){
		
		cout<<'*';
	}else{
		
		if(j%3==0){
			
			cout<<'*';
		}else{
			
			cout<<'.';
		}
		
		
	}
	
	
	
	
}

void print_col(int i,int n,int m){
	
	for(int j=0;j<m;j++){
		
		print_logic(i,j,n,m);
	}
	cout<<endl;
	
}

void print_row(int n,int m){
	
	for(int i=0;i<n;i++){
		
		print_col(i,n,m);
	}
	
}

void solve(){
	int n1,m1;
	cin>>n1>>m1;
	
	int n=3*n1;
	int m=3*m1;
	
	print_row(n,m);
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}
