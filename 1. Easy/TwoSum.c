int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret_array = malloc(2 * sizeof(int));;
    int x = 0;
    for (int i = 0; i < numsSize; i++) {
        x = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] == target - x) {
                ret_array[0] = i;
                ret_array[1] = j;
                *returnSize = 2;
                return ret_array;
            }
        }
    }
    return ret_array;
}
