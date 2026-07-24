class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int s=0 , e=arr.size()-1 , m;
        

        while(s<=e){
            m = e + (s-e)/2;


            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
                
                return m;

            }else if(arr[m]>arr[m-1]){
             s=s+1;
            }else
            e=e-1;
        }
         return m;
    }
};