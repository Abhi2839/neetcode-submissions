class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for (auto x:s){
            if (x=='{' or x=='[' or x=='(') st.push(x);
             else {
                if (x == '}' and !st.empty() and st.top() == '{') {
                    st.pop();
                } else if (x == ']' and !st.empty() and st.top() == '[') {
                    st.pop();
                } else if (x == ')' and !st.empty() and st.top() == '(') {
                    st.pop();
                }
                 else {
                    return false;
                }
            }
        }
        return st.empty();
        }
    
};
