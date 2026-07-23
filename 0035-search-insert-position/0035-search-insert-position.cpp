class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int indx= nums.size();

        int s = 0 , e = nums.size()-1 , m ;

        while(s<= e){
            m = e + (s-e)/2;

            if(nums[m]==target){
                indx = m;
                break;
            } else if (nums[m]<target){
                s = m+1;

            }else {
            indx=m;
            e=m-1;
            }
        }
        return indx;
    }
};