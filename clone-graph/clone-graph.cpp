/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/



class Solution {
public:
    
    Node* map[101];
    
    void dfs(Node* node){
           
        map[node->val] = new Node(node->val);
     
        for(auto neighbor : node->neighbors)
        {
            if(map[neighbor->val] == NULL)
                dfs(neighbor);    
            map[node->val]->neighbors.emplace_back(map[neighbor->val]);
        }
    }
    
    Node* cloneGraph(Node* node) {
        
        if(node == NULL)
            return NULL;
        
        for(int i = 0 ; i <= 100; i++)
            map[i] = NULL;

        dfs(node);
        
        return map[1];
        
    }
    
};