class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        vector<int> r;
        int s=0, e= a.size()-1;
        while(s<e){
            if(a[s]+a[e]==t){
                 r.push_back(s+1);
             r.push_back(e+1);
             return r;
               
            }else if(a[s]+a[e]<t)
            s++;
            else
            e--;
           
           
    }
     return r;
       
    }
};