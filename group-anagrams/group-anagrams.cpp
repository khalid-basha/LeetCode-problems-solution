class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string s:strs){
            string temp=s;
            sort(temp.begin(), temp.end());
            map[temp].push_back(s);
        }
        vector<vector<string>> answer;
        answer.reserve(map.bucket_count());
        for (auto l:map) {
            answer.push_back(l.second);
        }
        return answer;
    }
};