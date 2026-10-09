class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> r(m,0);
        vector<int> c(n,0);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(matrix[i][j]==0){
                r[i]=1;
                c[j]=1;
               } 
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(r[i]==1 || c[j]==1){
                matrix[i][j]=0;
               } 
            }
        }
        
    }
};