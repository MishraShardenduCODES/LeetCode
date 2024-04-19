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
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }

    int solve(TreeNode* root, int num) {
        if (root == nullptr) return 0;

        num = num * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return num;
        }

        int leftSum = solve(root->left, num);
        int rightSum = solve(root->right, num);

        return leftSum + rightSum;
    }
};