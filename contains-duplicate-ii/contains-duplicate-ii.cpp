class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int prev_index = map[nums[i]];
            if(prev_index!=0 && abs(prev_index-i)+1<=k)
                return true;
            map[nums[i]]=i+1;
        }
        return false;
    }
};