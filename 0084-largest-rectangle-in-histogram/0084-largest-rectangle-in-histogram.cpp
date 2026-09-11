class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector <int> r(n); // next smallest vaule in right index store
        vector <int> l(n); // next smallest vaule in right index store
        stack <int> s; //index store

        for(int i = 0 ; i<n ; i++){
            while(!s.empty()&& h[s.top()]>h[i]){
            r[s.top()]=i;
            s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            r[s.top()]=n;
            s.pop();
        }
        for(int i =n-1; i>=0 ; i--){
            while(!s.empty()&& h[s.top()]>h[i]){
            l[s.top()]=i;
            s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            l[s.top()]=-1;
            s.pop();
        }

        int ans = 0 ; 
        for(int i = 0 ; i<n ; i++){
            ans = max(ans , h[i]*(r[i]-l[i]-1));
        }
        return ans;
        
    }
};

//tc - o(n)