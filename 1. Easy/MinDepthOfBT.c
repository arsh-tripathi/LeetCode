/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int minDepth(struct TreeNode* root){
    if (!root) {
        return 0;
    } else if (root->left && root->right) {
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    } else if (root->left) {
        return minDepth(root->left) + 1;
    } else if (root->right) {
        return minDepth(root->right) + 1;
    } else {
        return 1;
    }
}
