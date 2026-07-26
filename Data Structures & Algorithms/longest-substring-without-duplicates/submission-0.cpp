class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=0,len=0;
        for (int r=0;s.length()>r;r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            len=max(len,r+1-l);
        }
return len;
    }
};
