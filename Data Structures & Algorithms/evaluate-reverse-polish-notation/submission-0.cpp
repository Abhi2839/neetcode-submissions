#include <vector>
#include <string>
#include <stack>

class Solution {
   public:
    int eval(int a, int b, const string& op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        return a / b;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& x : tokens) {
            if (x == "+" || x == "-" || x == "*" || x == "/") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                st.push(eval(a, b, x));
            } else {
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};
