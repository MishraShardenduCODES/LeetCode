#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        
        int l = solve(root->left) + 1;
        int r = solve(root->right) + 1;
        
        return max(l,r);
    }

    int maxDepth(TreeNode* root) {
        return solve(root);
    }
};
