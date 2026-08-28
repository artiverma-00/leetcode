class Solution {
public:
void para(int n , int l , int r , vector<string>&ans , string &temp){
    //base case
    if(l+r==2*n){
        ans.push_back(temp);
    }

    //left para
    if(l<n){
        temp.push_back('(');
        para(n , l+1 , r , ans , temp);
        temp.pop_back();
    }
    //right para
    if(r<l){
        temp.push_back(')');
        para(n , l , r+1 , ans , temp);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        para(n , 0 , 0 ,ans , temp);
        return ans;
        
    }
};