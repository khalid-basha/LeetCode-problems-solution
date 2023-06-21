class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left =0, right= nums.size();
        int sum_left=0,sum_right=0;
        for (int num:nums) {
            sum_left+=num;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(sum_left-nums[i]==sum_right )
                return i;
            sum_right+=nums[i];
            sum_left-=nums[i];

        }
        return -1;
    }
};