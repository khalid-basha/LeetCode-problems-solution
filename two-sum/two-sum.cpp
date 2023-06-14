class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int b,goal;
        int j=nums.size()-1;
        b=nums[j];
        while (j!=0){
            b=nums[j];
            goal=target-b;
            for(int k=0;k<j;k++)
                if(nums[k]==goal)
                {
                    vector<int> v;
                    v.push_back(k);
                    v.push_back(j);
                    return v;
                }
            j--;


        }

        vector<int> v(1,0);
        return v;
    }
};