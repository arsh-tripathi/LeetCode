/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    if (!root) {
        *returnSize = 0;
        return NULL;
    }
    int *ret = malloc(sizeof(int) * 100);
    int *left_size = malloc(sizeof(int));
    int *right_size = malloc(sizeof(int));
    int *left_array = inorderTraversal(root->left, left_size);
    int *right_array = inorderTraversal(root->right, right_size);
    for (int i = 0; i < *left_size; i++) {
        ret[i] = left_array[i];
    }
    ret[*left_size] = root->val;
    for (int i = 0; i < *right_size; i++) {
        ret[i+*left_size+1] = right_array[i];
    }
    free(left_array);
    free(right_array);
    *returnSize = *left_size + *right_size + 1;
    return ret;
}
