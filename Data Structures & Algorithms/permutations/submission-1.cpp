class Solution {
public:
vector<vector<int>>ans;
void solve (vector<int>&nums,int i){
    if (i==nums.size()-1){
        ans.push_back(nums);
        return ;
    }
    for (int j=i;nums.size()>j;j++){
        swap(nums[i],nums[j]);
        solve(nums,i+1);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};
