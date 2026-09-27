class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int s = 0 ;

        for(int f= 0; f<n ; f++){
            if(nums[f] !=0 ){
                swap(nums[s] , nums[f]);
                s++;
                
            } 
         


        }
      return;
    }
};