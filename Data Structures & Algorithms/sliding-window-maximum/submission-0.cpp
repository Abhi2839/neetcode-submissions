class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> ans;
        deque<int> dq(k);
        for (int i = 0; k > i; i++) {
            while (!dq.empty() and arr[i] >= arr[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        for (int i = k; arr.size() > i; i++) {
            ans.push_back(arr[dq.front()]);

            while (!dq.empty() and i - k >= dq.front()) dq.pop_front();
            while (!dq.empty() and arr[i] >= arr[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        return ans;
    }
};
