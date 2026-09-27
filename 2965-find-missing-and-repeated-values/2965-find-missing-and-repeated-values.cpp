class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=0,b=0;
        int n=grid.size();
        vector<int> freq(n*n+1,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }

        for(int i=1;i<=n*n;i++){
            if(freq[i]==2){
                a=i;
            }
            if(freq[i]==0){
                b=i;
            }
        }
        return {a,b};
    }
};