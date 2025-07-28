class Solution {
public:
    vector<int> parent;  // to store parent of each node

    // ✅ FIND Function
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);  // path compression
        return parent[x];
    }

    // ✅ UNION Function
    bool unionSet(int u, int v) {
        int pu = find(u);  // find parent of u
        int pv = find(v);  // find parent of v
        if (pu == pv) return false; // cycle found
        parent[pu] = pv;            // union the sets
        return true;
    }

    // ✅ MAIN FUNCTION
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();     // number of edges
        parent.resize(n + 1);     // 1-based indexing

        for (int i = 0; i <= n; i++) {
            parent[i] = i;  // initially each node is its own parent
        }

        for (auto edge : edges) {
            if (!unionSet(edge[0], edge[1])) {
                return edge;  // edge causes cycle
            }
        }

        return {};
    }
};
