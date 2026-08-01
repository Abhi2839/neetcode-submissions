class Solution {
   public:
    vector<string> ans;
    void solve(int n, string s,int i, int j) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (n > i) {
            s.push_back('(');
            solve(n, s, i + 1, j);
        }
        if (i > j) {
            s.push_back(')');
            solve(n, s, i, j + 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(n,s,0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
