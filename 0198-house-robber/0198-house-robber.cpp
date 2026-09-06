class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();

        if(n==1) return nums[0];

        // vector<int> dp(n);

        // dp[0]=nums[0];
        // dp[1]=max(nums[0],nums[1]);

        int prev1=nums[0];
        int prev2=max(nums[0],nums[1]);
        int result=prev2;
        
        //space optimization
        for(int i=2;i<n;i++){
            // dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            result=max(prev2,prev1+nums[i]);
            prev1=prev2;
            prev2=result;
        }

        // return dp[n-1];
        return result;
    }
};