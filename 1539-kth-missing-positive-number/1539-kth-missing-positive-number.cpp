class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int s = 0 , e=arr.size()-1 , m ;
       int  ans=arr.size(); //sorted to handle

        while(s<=e){

            m = s+ (e-s)/2;

            if((arr[m]-m-1)>=k){
                ans= m;
                e=m-1;
            }else
            s = m+1;
        }
        return ans+k;
        
    }
};