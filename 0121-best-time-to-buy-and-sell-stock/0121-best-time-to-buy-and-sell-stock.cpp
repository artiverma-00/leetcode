class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n= p.size();
          int b=p[0] , pr = 0  ;
       
        for(int i=1; i<n; i++){
            if(p[i]<b){
                 b = p[i];
                
            }else
            pr = max ( pr , p[i]-b);
        }
        

        return pr;
        
    }
};