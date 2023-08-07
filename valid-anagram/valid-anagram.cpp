class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());
    //     return s==t;
    // }
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (char x : s) {
            count[x]++;
        }
        for (char x : t) {
            count[x]--;
        }
        
        for (pair<char,int> x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        
        return true;
    }
};