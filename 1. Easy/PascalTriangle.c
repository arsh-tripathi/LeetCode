/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int **ret_arr = malloc(sizeof(int *)*numRows);
    *returnSize = numRows;
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++) {
        returnColumnSizes[0][i] = i+1;
        ret_arr[i] = malloc(sizeof(int) * (i+1));
        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
                ret_arr[i][j] = 1;
            } else {
                ret_arr[i][j] = ret_arr[i-1][j-1] + ret_arr[i-1][j];
            }
        }
    }
    return ret_arr;
}
