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
Node* dfs(Node* cur,unordered_map<Node*,Node*>& m){
    vector<Node*> n;
    Node* clone = new Node(cur->val);
    m[cur] = clone;
    for(auto it:cur->neighbors){
        if(m.find(it)!=m.end()){
            n.push_back(m[it]);
        }
        else{
            n.push_back(dfs(it,m));
        }
    }
       clone->neighbors = n;
        return clone;
}
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        unordered_map<Node*,Node*> m;

        return dfs(node,m);
    }
};