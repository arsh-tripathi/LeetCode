/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int max_depth(struct TreeNode *root) {
    if (!root) {
        return 0;
    }
    return max(max_depth(root->left), max_depth(root->right)) + 1;
}


bool isBalanced(struct TreeNode* root){
    if (!root) {
        return true;
    } else if ((max_depth(root->left) - max_depth(root->right) > 1) || (max_depth(root->left) - max_depth(root->right) < -1)) {
        return false;
    } else {
        return isBalanced(root->left) && isBalanced(root->right);
    }
}
