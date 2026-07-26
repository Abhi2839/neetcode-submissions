class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int i = 0, j = heights.size() - 1;
        while (j > i) {
            ans = max(ans, (j - i) * min(heights[i], heights[j]));
            if (heights[j] >= heights[i])
                i++;
            else
                j--;
        }
        return ans;
    }
};
