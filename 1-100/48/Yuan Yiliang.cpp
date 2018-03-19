class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0; i<n-1; i++)
            for(int j=i+1;j<n;j++){
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n/2;j++) {
                int t=matrix[i][n-1-j];
                matrix[i][n-1-j] = matrix[i][j];
                matrix[i][j] = t;
            }
        
    }
};