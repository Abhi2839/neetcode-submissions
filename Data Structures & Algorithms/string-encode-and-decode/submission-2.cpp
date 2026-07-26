class Solution {
   public:
    string encode(vector<string>& strs) {
        string res = "";
        for (auto& st : strs) {
            // here @ act as separator
            res += to_string(st.size()) + "@" + st;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (s.size() > i) {
            int j = i;
            while (s[j] != '@') j++;
            int len = stoi(s.substr(i, j - i));  // 5#hello
            ans.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return ans;
    }
};
