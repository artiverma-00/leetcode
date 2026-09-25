class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {

        //using binary search
        int n= nums.size();
            int m ;
        int s = 0 , e=nums.size()-1;
        while(s<=e){
             m = e + (s-e)/2;

         if(nums[m]==t){
           return m;
           
         }
         else if(nums[m]<t){
              s = m+1;
         }
         else{
        
         e = m-1;
         
         }
        }
        return s;
    }
};