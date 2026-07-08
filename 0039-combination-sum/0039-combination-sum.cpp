class Solution {
public:
set<vector<int>> s; 
    void getAllCombinations(vector<int>& candidates,int idx,int target,vector<vector<int>>& ans,vector<int>& combine){
        if(idx==candidates.size() || target<0) return;
        if(target==0){
            if(s.find({combine})==s.end()){
                ans.push_back({combine});
                s.insert({combine});
            }
            return;
        }
        combine.push_back(candidates[idx]);
        //single inclusion
        getAllCombinations(candidates,idx+1,target-candidates[idx],ans,combine);
        //multiple inclusion
        getAllCombinations(candidates,idx,target-candidates[idx],ans,combine);
        //exclusion
        combine.pop_back();//backtracking
        getAllCombinations(candidates,idx+1,target,ans,combine);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combine;
        getAllCombinations(candidates,0,target,ans,combine);
        return ans;
    }
};