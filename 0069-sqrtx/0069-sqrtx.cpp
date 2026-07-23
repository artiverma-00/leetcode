class Solution {
public:
    int mySqrt(int x) {

    
        int s =0 , e=x,  ans;
if (x == 0)
        return 0;
        while(s<=e){
        long long    m = s + (e - s) / 2;


            if(m*m== x){
                ans = m;
                return ans; // exact ans
            }
            else if(m*m<x){
                ans = m;
                s= m+1;
            }
            else
            e=m-1;
        }
        return ans; // floor of sqrt(x)
    }
};