class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(i<s.length()){
            if(s[i]=='(' || s[i] == '{' || s[i]== '['){
                st.push(s[i]);
                i++;
            }
            else{
                if(st.empty())
                    return false;
                else{
                    if((s[i] == '}' &&  st.top() != '{')|| (s[i] == ')' && st.top() != '(') ||
                        (s[i] == ']' && st.top() != '[')){
                        return false;
                    }
                    else{
                        i++;
                        st.pop();
                    }
                }
            }
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};