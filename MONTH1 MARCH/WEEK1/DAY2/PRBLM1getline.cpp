//given n no of people greet them in reverse order 



/*

ip
2
Debasish Das
Vivek Gupta


op
Hi Vivek Gupta !
Hi Debasish Das!

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define endl '\n'

void solve(){
	
int n ;
cin>>n;

string temp;
//*******// btw cin and string input declare a dummy string //
getline(cin,temp);
string s[n];

for(int i=0;i<n;i++){
   getline(cin,s[i]);
}

	for(int i=n-1;i>=0;i--){
		
		cout<<"Hi "<<s[i]<<" !"<<endl;
	}
	
	
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	// int _t; cin>>t;while(_t--)
		solve();
	
	
	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
}