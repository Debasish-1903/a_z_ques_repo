/*

*
**
***
****
*****
******

for(int i=1;i<=n;i++){
	
	for(int j=1;j<=i;j++){
		
		
		cout<<"*";
	}
	cout<<endl;
	
	
}



*/
/*


7
* * * * * * *
* . . . . . *
* . * * * . *
* . * . * . *
* . * * * . *
* . . . . . *
* * * * * * *

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print_logic(int i,int j,int n){
	
	int decide=max(abs(i-n/2),abs(j-n/2));
	
	
	// char ch1 ='*';
	// char ch2 ='.';
	
	// if(n%4==3){
		
	// 	swap(ch1,ch2);
		
		
	// }
	// if(decide%2==0){
		
	//  	cout<<ch1;
	// }else{
		
		
 	// cout<<ch2;
	//  }
	
	
	if((decide+n/2)%2==0){
		
		cout<<"* ";
	}else{
		
		
		cout<<"@ ";
	}
	
	cout<<decide<<" ";
	
}

void print_col(int i,int n){
	
	for(int j=0;j<n;j++){
		
		print_logic(i,j,n);
	}
	cout<<endl;
	
}

void print_row(int n){
	
	for(int i=0;i<n;i++){
		
		print_col(i,n);
	}
	
}

void solve(){
	int n;
	cin>>n;
	
	print_row(n);
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}

