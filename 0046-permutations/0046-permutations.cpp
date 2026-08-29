class Solution {
public:
void per(vector<int> &nums , vector<vector <int>> &ans,vector <int> &temp,vector <bool> &visit){

            if(visit.size()==temp.size()){
                ans.push_back(temp);
                return ;
            }

            for(int i=0; i<visit.size();i++){

                if(visit[i]==0){
                   visit[i]=1;
                   temp.push_back(nums[i]);
per(nums,ans,temp,visit);
visit[i]=0;
temp.pop_back();
                }
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector <int>> ans;
        vector <int> temp;
        vector <bool> visit(nums.size(), false);;
         per( nums ,ans, temp,visit);

         return ans;
        
        
    }
};