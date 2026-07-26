class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //  priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int, int> mp;
        for (auto x : nums) mp[x]++;
        vector<pair<int, int>> arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(), [&](auto& a, auto& b) { return b.second < a.second; });
        int i = 0;
        vector<int> ans;
        while (k--) {
            ans.push_back(arr[i].first);
            i++;
        }

        //  for (auto x:nums){
        //     pq.push(x);
        //     if (pq.size()>k) pq.pop();
        //  }
        //  while(!pq.empty()) {
        //     ans.push_back(pq.top());
        //     pq.pop();
        //  }
        return ans;
    }
};
