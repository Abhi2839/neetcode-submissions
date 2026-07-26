class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; n - 2 > i; i++) {
            if (i >0 and nums[i - 1] == nums[i]) continue;
            int j = i + 1, k = n - 1;
            while (k > j) {
                if ((nums[k] + nums[j] + nums[i]) == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (k > j and nums[k] == nums[k - 1]) k--;
                    while (k > j and nums[j] == nums[j + 1]) j++;

                } else if (nums[k] + nums[j] + nums[i] > 0)
                    k--;
                else
                    j++;
            }
        }

        return ans;
    }
};
