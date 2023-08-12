/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum){
    if (!root) {
        return false;
    } else if (root->left && root->right) {
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    } else if (root->left) {
        return hasPathSum(root->left, targetSum - root->val);
    } else if (root->right) {
        return hasPathSum(root->right, targetSum - root->val);
    } else {
        if (targetSum == root->val) {
            return true;
        } 
        return false;
    }
}
