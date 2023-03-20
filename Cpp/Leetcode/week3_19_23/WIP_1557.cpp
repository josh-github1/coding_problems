class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges);
};

vector<int> Solution::findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
{

    /* Algo:
    Turn the edges vector into a proper graph
    loop through graph using some graph traversal algorithm.
        keep looping with every element
        append reachable nodes for every element

    loop through element's reachable nodes list
        find which one has all the nodes and return this
        or find which sets of reachable nodes list collectively have the minimum
            amount of vertices that contain all the vertices of the graph

    */
    vector<int> visitedNode; 
    for (int i = 0; i < edges.size()-1; i++)
    {
        
    }
}