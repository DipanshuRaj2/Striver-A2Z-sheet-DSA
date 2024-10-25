#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
void bfs(TreeNode *root)
{
    vector<vector<int>> ans;
    queue<TreeNode *> qe;
    qe.push(root);
    int cnt = 0;
    while(!q.empty())
    {
        
    }
    
    }
    ans.push_back(level);
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    bfs(root);
    return 0;
}