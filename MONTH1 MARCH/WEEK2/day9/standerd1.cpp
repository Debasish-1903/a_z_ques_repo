#include<bits/stdc++.h>
using namespace std;
#define ll long long int

#define nl "\n"

// function to compute GCD
ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(){
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    
    // compute GCD of all the elements in vector 'a'
    ll g = a[0];
    for(ll i = 1; i < n; i++){
        g = gcd(g, a[i]);
    }
    
    // check if GCD is greater than or equal to 2
    if(g >= 2){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int _t;
    cin >> _t;
    while(_t--){
        solve();
    }
}