class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
         int n=nums.size();
        vector <int> ans;
        
        for(int i= 0 ; i<n ; i++){
            int c = nums[i];
             vector <int> rev; //  3,1  
             while(c>0){
                rev.push_back(c%10);
                c/=10;
             }

             //now push the digits into ans
             int p= rev.size();
           
         for(int j=p-1 ; j>=0 ; j--){
            ans.push_back(rev[j]);
         }

        }
        return ans;
    }
};