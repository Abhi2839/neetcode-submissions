class Solution {
public:
    int characterReplacement(string s, int k) {
        int len=0,max_freq=0,i=0;
        unordered_map<char,int>mp;
        for (int j=0;s.length()>j;j++){
            mp[s[j]]++;
            max_freq=max(max_freq,mp[s[j]]);
            while((j+1-i)-max_freq>k) mp[s[i++]]--;
            len=max(len,j+1-i);
        }
        return len;
    }
};
