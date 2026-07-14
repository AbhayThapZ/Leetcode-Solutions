class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> result;
        for(int num:nums){
            m[num]++;
            if(m[num]==2){
                result.push_back(num);
            }
        }
        return result;
        // vector<int> freq;
        // sort(nums.begin(),nums.end());
        // int count=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         freq.push_back(nums[i]);
        //     }
        // }
        // return freq;
    }
};