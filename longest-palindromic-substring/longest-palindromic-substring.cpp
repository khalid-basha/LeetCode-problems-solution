class Solution {
public:
    string longestPalindrome(string s) {
        int len=0;
        int maxLeft=0,maxRight=0;
        string res="";
        for (int i = 0; i < s.length(); ++i) {//i=1 ->l=1,r=2
            int l=i,ro=i,re=i+1;
            while (l>=0 && re<=s.length() && s[l]==s[ro]){
                if(len < (ro-l+1)){//odd case
                    maxLeft=l;
                    maxRight=ro;
                    len = (ro-l+1);
                }
                ro++;
                l--;
            }
            l=i;
            while (l>=0 && re<=s.length() && s[l]==s[re]){
                if(len < (re-l+1) && i+1 != s.length()){//even case
                    maxLeft=l;
                    maxRight=re;
                    len =(re-l+1);
                }
               re++;
                l--;
            }
             
        }
        for (int i = maxLeft; i <=maxRight; ++i) {
            res.push_back(s[i]);
        }
        return res;
    }
};