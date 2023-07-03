#include<bits/stdc++.h>
using namespace std;
//3 2 1 5 8 7 6 1 2
//k=3;

int main(){
    
   int n,k;
   
   cin>>n>>k;
   
   vector<int>v(n);
   
   for(int i=0;i<n;i++){
       
       
       cin>>v[i];
       
   }
   
   multiset<int>mt;
   
   for(int i=0;i<n;i++){
       
       mt.insert(v[i]);
       
       if(i>=k){
           
           mt.erase(mt.find(v[i-k]));
       }
     
      if(i>=k-1)  cout<<*mt.begin()<<endl;
       
       
       
       
       
   }
    
    
    
    
    
    
}