/*#include<bits/stdc++.h>
using namespace std;


int main(){
    
    map<char,int>mp;
    
    mp['(']=1;
    mp['{']=2;
    mp['[']=3;
    mp[')']=-1;
    mp['}']=-2;
    mp[']']=-3;
    
     string s="[][]{{{}}";
    // cin>>s;
    
    stack<int>st;
    bool flag=true;
    for(auto it:s){
        int cnt=0;
        int x=mp[it];
        
        if(x>0){
            
            st.push(x);
            
            
        }else if(!st.empty()&&x<0){
            cnt=st.top()+x;
            
            if(cnt==0){
                
                st.pop();
            }
            
        }else{
            
            flag =false;
            break;
        }
        
    
    }
   
   
   if(flag &&st.empty()) {
       
       
       cout<<"Balanced"<<endl;
   }else{
       
       
       cout<<"Unbalanced"<<endl;
   }
    
    
    
    
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;//({[]}[])
    cin>>s;
    
    
    
    
    map<char,int>mp;
    
    mp['(']=1;
    mp['{']=2;
    mp['[']=3;
    mp[')']=-1;
    mp['}']=-2;
    mp[']']=-3;
    
    stack<int>st;
    
    bool flag=true;
    
    for(auto it:s){
        int num=mp[it];
        
        if(num>0){ // for opening  backet
            st.push(num);
        }else if(!st.empty()&&st.top()+num==0){ // for balancing closing  backet;
            
            st.pop();
        }else{
            
            // unbalencing closed backed;
            flag =false;
            break;
            
        }
        
        
        
        
    }
    
    
    if(flag==true&&st.empty()){
        
        cout<<"Balenced "<<endl;
        
    }else{
        cout<<"Unbalenced"<<endl;
    }
    
    
    /*
    
    
    
}