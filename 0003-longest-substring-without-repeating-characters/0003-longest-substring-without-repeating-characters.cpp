class Solution {
public:
    int lengthOfLongestSubstring(string S) {
        vector <bool> count(256 , 0);
        int f=0 , s=0 , len=0 ;

        while(s<S.size()){
            //check scond repeating char remove and f++
            while(count[S[s]]){
                count[S[f]]=0;
                f++;
            }
            count[S[s]]=1;
            len=max(len , s-f+1);
            s++;
        }
        return len;
        
    }
};