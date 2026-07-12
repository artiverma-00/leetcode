class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n =arr.size();
         vector<int> sortedArr = arr;   // copy original
        
        //sorting
        sort(sortedArr.begin(), sortedArr.end());

        //traverse index through precompute <key, freq>
      
      unordered_map<int,int> rank;
      int r= 1;

        for (int x : sortedArr) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }

      vector<int> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = rank[arr[i]];
        }
        return result;
    }
};