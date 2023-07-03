
#include<bits/stdc++.h>
using namespace std;


/*

5X6 matrix
sw....
...w..
wwww.w
...w..
fw....


*/


#define ii pair<int,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define F first 
#define S second

const int INF=100;

int n,m;
vector<string>arr;
queue<ii>q;


vvi vis,dist;


int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

bool is_valid(int x,int y){
    
   if(x<0||x>=n||y<0||y>=m||arr[x][y]=='w'){return 0;
       
   }else{
       
       return 1;
   }
    
}


vector<ii>neighoubr(ii cur){
    
    vector<ii>neigh;
    
  
    
    for(int k=0;k<4;k++){
        
          ii node =cur;
          
          node.F+=dx[k];
          node.S+=dy[k];
          
          
          if(is_valid(node.F,node.S)){
              
              neigh.push_back(node);
          }
        
        
        
    }
    
    return neigh;
    
}


void bfs(ii st){
   
   vis=vvi (n,vi(m,0));
   dist =vvi(n,vi(m,INF));
   
   q.push(st);
   vis[st.F][st.S]=1;
   dist[st.F][st.S]=0;
   
   while(!q.empty()){
       
       ii cur=q.front();
       q.pop();
       
       for(auto it:neighoubr(cur)){
           
           
           if(!vis[it.F][it.S]){
               q.push(it);
               vis[it.F][it.S]=1;
               dist[it.F][it.S]=dist[cur.F][cur.S]+1;
              
           }
           
           
           
           
       }
       
        
       
   }
   
   
   
    
    
    
    
}


void solve(){
    
    cin>>n>>m;
    arr.resize(n);
    ii st,en;
    
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
        
        for(int j=0;j<n;j++){
            
            if(arr[i][j]=='s'){
                st={i,j};
                
            }
            if(arr[i][j]=='f'){
                en={i,j};
                
            }
            
        }
        
    }
    
    bfs(st);
    
    for(int  i=0;i<n;i++){
      for(int j=0;j<m;j++) {
          
          cout<<dist[i][j]<<"\t";
          
      } 
      
      cout<<endl;
    }
    
    
    
    if(vis[en.F][en.S]){
        
        cout<<"Possible"<<" "<<"distance is "<<dist[en.F][en.S]<<endl;
    }else{
        
        cout<<"impossible"<<endl;
    }
    
    
    
    
    
}


int main(){
    
    
   solve(); 
    
    
}