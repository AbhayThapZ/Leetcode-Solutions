class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> freq;
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                freq.push_back(nums[i]);
            }
        }
        return freq;
    }
};