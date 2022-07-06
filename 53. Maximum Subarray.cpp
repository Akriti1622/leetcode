//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0, maxx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            curr+=nums[i];
            curr=max(curr, nums[i]);
            maxx=max(maxx, curr);
        }
        return maxx;
    }
};
