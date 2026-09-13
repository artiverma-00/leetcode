class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)
        return nums[0];
        //case-1 1h to n-1 h check
        int a=0 , b=0;
        for(int i=0 ; i<n-1; i++){
            int curr = max(b , a+nums[i]);
            a=b;
            b=curr;
        }
         int first = b;
        //case -2 second h se last h ignore first h
        a=0 ,b=0;
       
        for(int i=1 ; i<n ; i++){
            int curr = max( b , a+nums[i]);
            a=b;
            b=curr;

        }

        int sec = b;
        return max(first , sec);
    }
};