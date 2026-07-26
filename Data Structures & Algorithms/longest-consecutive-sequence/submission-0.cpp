class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int cnt = 1, ans = 0;
        for (auto x : nums) {
            if (!st.count(x - 1)) {
                int curr = x;
                cnt=1;
                while (st.count(curr+1)) {
                    curr++;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};
