class Solution {
   public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for (auto x : s) arr[x - 'a']++;
        for (auto x : t) arr[x - 'a']--;
        for (int i = 0; 26 > i; i++) {
            if (arr[i] != 0) return 0;
        }
        return 1;
    }
};
