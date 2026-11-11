class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i] == "+")
            {
                int temp = st.top();
                st.pop();
                int sum = st.top() + temp;
                st.pop();
                st.push(sum);
            }
             else if(tokens[i] == "-")
            {
                int temp = st.top();
                st.pop();
                int diff = st.top() - temp;
                st.pop();
                st.push(diff);
            } else if(tokens[i] == "*")
            {
                int temp = st.top();
                st.pop();
                int mul = temp * st.top();
                st.pop();
                st.push(mul);
            } else if(tokens[i] == "/")
            {
                int temp = st.top();
                st.pop();
                int div = st.top() / temp;
                st.pop();
                st.push(div);
            }else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};