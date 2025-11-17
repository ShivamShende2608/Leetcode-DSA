class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m= mat[0].size();

        queue<pair<int ,int>>q;

        for(int i=0; i< n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }else{
                    mat[i][j]=-1;
                }
            }
        }

        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty()){
            auto front=q.front();
            q.pop();
            int r=front.first;
            int c=front.second;

            for(auto &d: dirs){
                int nr= r + d[0];
                int nc= c + d[1];

                if(nr >=0 && nc>=0 && nr < n && nc < m && mat[nr][nc]==-1){
                    mat[nr][nc]=mat[r][c]+1;
                    q.push({nr,nc});
                }
            }
        }

        return mat;

        
    }
};
