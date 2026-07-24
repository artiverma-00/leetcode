class Solution {
public:
    int findMin(vector<int>& arr) {

        int ans = arr[0]; 
        int s = 0 , e = arr.size()-1 , m;

        while(s<=e){

            m = e +(s-e)/2 ;

            //left 
            if(arr[m]>= arr[0]){
                s = m+1;
              

            } else
            {
            ans = arr[m];
            e= m-1;
            }
        }
        return ans;
    }
};