class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();
        vector <string> ans(n);

       unordered_map<int , int> mp;

        for(int i = 0 ; i<n ; i++){

            mp[score[i]]=i; // original index store
            
        }
        //sort
        sort(score.rbegin() , score.rend());

        for(int i = 0 ; i<n ; i++){
            if(i==0){
           int ath =  mp[score[i]]; // returnig in ans 1st
           ans[ath] = "Gold Medal";

            }
         else if(i==1){
           int ath =  mp[score[i]]; // returnig in ans 2st
           ans[ath] = "Silver Medal";

            }
           else if(i==2){
           int ath =  mp[score[i]]; // returnig in ans 3st
           ans[ath] = "Bronze Medal";

            }
            else{
                int ath =  mp[score[i]]; // returnig in ans x to n
           ans[ath] = to_string(i+1); //int to string

            }

            
        }
        

        return ans;
        
    }
};