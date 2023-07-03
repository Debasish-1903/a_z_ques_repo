class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
set<int>st(nums.begin(),nums.end());

int i=1;
int n=st.size();

while(i<n){

     if(st.find(i)!=st.end()){


i++;


     }else{

  return i;


     }
   
}


return n+1;
    }
};