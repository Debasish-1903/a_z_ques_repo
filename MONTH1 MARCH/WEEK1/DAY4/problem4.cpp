// #include<bits/stdc++.h>
// using namespace std;
// //#define ll long long int


// #define  ll __int128;

// void solve(){
	
// 	ll a,b;
// 	cin>>a;
	
// 	ll ans=0;
	
// 	while(a>0){
// 		b=a%10;
		
		
		
// 		ans+=b;
// 		a=a/10;
// 	}
	
// 	cout<<ans<<'\n';
// }

// signed main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);cout.tie(0);
	
// 	//int _t; cin>>_t;while(_t--)
// 		solve();
	
	
// 	//cerr<<"Time elapsed: "<< 1.0*clock()/ CLOCKS_PER_SEC << "s.\n\n";
	
	
	
	
// }





// Include necessary headers
// #include <iostream>
// using namespace std;

// // Use __int128 type for large numbers
// typedef __SIZEOF__INT128 ll;

// void solve(){
	
// 	ll number,digit;
// 	cin>>number;
	
// 	ll sum=0;
	
// 	while(number>0){
// 		digit=number%10; // Get the rightmost digit
		
// 		sum+=digit; // Add it to the sum
// 		number=number/10; // Remove the rightmost digit
// 	}
	
// 	cout<<sum<<'\n'; // Print the sum
// }

// int main(){
// 	// Speed up input/output operations
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
	
// 	solve();
// } 

#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define ll long long

cpp_int boost_sum(cpp_int a){
    
    cpp_int b;
    
    cpp_int ans=0;
    
    while(a>0){
        
        b=a%10;
        ans+=b;
        
        a=a/10;
        
       
        
    }
    
    return ans;
    
}





void solve(){
    
    cpp_int a;
    cin>>a;
    
   cout<< boost_sum(a)<<endl;
    
    
    
}





signed main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int _t; cin>>_t;while(_t--)
		solve();
	
	
    
    
    
}