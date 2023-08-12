/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int *curr_row = malloc(sizeof(int) * (rowIndex + 1));
    *returnSize = rowIndex + 1;
    for (int i = 0; i <= rowIndex; i++) {
        for (int j = i; j >= 0; j--) {
            if (j == 0 || j == i) {
                curr_row[j] = 1;
            } else {
                curr_row[j] += curr_row[j-1];
            }
        }
    }
    return curr_row;
}
