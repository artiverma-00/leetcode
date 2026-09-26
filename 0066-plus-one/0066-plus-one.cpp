class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        int r=n-1 , l=0;

       
        while(r>=0){
            
               //if last digit r<9
               if(digits[r]<9){
                digits[r]++;
                return digits;
               }
        

               //else digit 9 then set[r]=0
               
               digits[r]=0;
               r--;
    }
               //if all digit 9 the 1 at begnning
              
              digits.insert(digits.begin(), 1);

            
            
        return digits;
    }
};