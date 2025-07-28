class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>inDegree(numCourses,0);

        for(auto &p:prerequisites){
            adj[p[1]].push_back(p[0]);
            inDegree[p[0]]++;
        }
        queue<int>q;

        for(int i=0; i<numCourses;i++){
            if(inDegree[i]==0)q.push(i);

        }
        int Count=0;
        while(!q.empty()){
            int Course=q.front();
            q.pop();
            Count++;

            for(int neighbor :adj[Course]){
                inDegree[neighbor]--;
                if(inDegree[neighbor]==0)q.push(neighbor);
            }
        }
        return Count==numCourses;
        
    }
};
