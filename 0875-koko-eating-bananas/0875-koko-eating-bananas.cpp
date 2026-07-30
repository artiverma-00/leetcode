class Solution {
public:
    int minEatingSpeed(vector<int>& p, int k) {
        long long su = 0;
       int n  = p.size();
        int s = 0 , e =0 , m ,ans;
        //sort(p.begin() , p.end());
       for(int i = 0; i<n ; i++){
        su+=p[i];

e = max(e , p[i]);
       }
s=su/k;
if(!s)
s=1;
       while(s<=e){
      m = s + (e-s)/2;

      int t = 0; 
      for(int i = 0 ; i<n ; i++){
       t+=p[i]/m;
       if(p[i]%m)
       t++;
        
      }
      if(t>k){
        s=m+1;
      }
      else{
        ans=m;
        e=m-1;
        }
      
       }
      return ans;

       
        
    }
};