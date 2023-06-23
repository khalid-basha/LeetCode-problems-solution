class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n1,n2;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+"){
                n1=st.top();
                st.pop();
                n2=st.top();
                st.pop();
                st.push(n2+n1);
            } else if(tokens[i] == "-"){
                n1=st.top();
                st.pop();
                n2=st.top();
                st.pop();
                st.push(n2-n1);
            } else if(tokens[i] == "*"){
                n1=st.top();
                st.pop();
                n2=st.top();
                st.pop();
                st.push(n2*n1);
            } else if(tokens[i] == "/"){
                n1=st.top();
                st.pop();
                n2=st.top();
                st.pop();
                st.push(n2/n1);
            } else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};