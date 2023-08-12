int removeDuplicates(int* nums, int numsSize){
    int len = 0;
    int prev = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i == 0) {
            len++;
            prev = nums[0];
        } else if (nums[i] == prev) {

        } else {
            nums[len] = nums[i];
            prev = nums[i];
            len++;
        }
    }
    return len;
}
