class Solution {
public:
    int distributeCandies(vector<int>& ct) {
        int n = ct.size();
       int x = n/2;
        unordered_set<int> st;
           for(int i=0; i<n; i++) {
                 st.insert(ct[i]);
}
          int max = min(x, (int)st.size());
          //auto max = min((size_t)x, st.size());
      

            return max;
        
    }
};