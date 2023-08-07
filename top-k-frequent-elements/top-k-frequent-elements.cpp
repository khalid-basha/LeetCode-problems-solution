class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int it:nums){
            mp[it]++;
        }

        multimap<int,int,greater<>> multi;

        for(pair<int,int> it:mp){
            multi.insert({it.second, it.first});
        }

        vector<int> ans;
        int i=0;
        for(pair<int,int> it:multi){
            ans.push_back(it.second);
            if(++i==k){
                break;
            }

        }

        return ans;

    }
};