class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        unordered_set<int> set;
        for (int x:arr) {
            map[x]++;
        }
        for (auto pa:map) {
            set.insert(pa.second);
        }
        return set.size()==map.size();
    }
};