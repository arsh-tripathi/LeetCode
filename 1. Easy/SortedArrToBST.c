/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    int middle = numsSize / 2;
    if (numsSize == 0) {
        return NULL;
    }
    struct TreeNode *ret = malloc(sizeof(struct TreeNode));
    ret->val = nums[middle];
    ret->left = sortedArrayToBST(nums, middle);
    ret->right = sortedArrayToBST(nums + middle + 1, numsSize - middle - 1);
    return ret;
}    
