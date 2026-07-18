class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
         int s = nums.front();   // first element (smallest)
    int l = nums.back();    // last element (largest)

    int ans=gcd(s,l);
return ans;


       
        
    }
};