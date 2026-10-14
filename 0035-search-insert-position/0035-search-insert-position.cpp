class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {

        int n= nums.size();
        int index =0;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==t){
                return i;
            } 
            if(nums[i]<t){
                index = i+1;
            }
        }
        return index;
    }
};