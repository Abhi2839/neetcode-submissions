class Solution {
   public:
    bool isPalindrome(string s) {
        string y = "", z = "";
for (auto x:s) {
    x=tolower(x);
    if (isalnum(x)) z+=x;}
        y = z;
        reverse(y.begin(), y.end());
        return y == z;
    }
};
