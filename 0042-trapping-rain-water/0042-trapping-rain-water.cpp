class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
       vector <int> lmax(n); //store left max element
       vector <int> rmax(n); //store right max element

       int total=0;
        //leftmax prefix sum use
         lmax[0]=arr[0];
        for(int i = 1 ; i<n; i++){
            lmax[i]=max(lmax[i-1] , arr[i]);
        }
        //rightmax
         rmax[n-1]=arr[n-1];
        for(int i =n-2 ; i>=0; i--){
            rmax[i]=max(rmax[i+1] , arr[i]);
        }
        
          //total calcution
        for(int i =0 ; i<n; i++){
           int minof2=min(lmax[i], rmax[i]);
         total+= minof2 - arr[i];
            
        }
        
        return total;
     
        
    }
};