int searchInsert(int* nums, int numsSize, int target){
    int max = numsSize;
    int min = 0;
    int middle = numsSize / 2;
    while (max - min > 1) {
        if (nums[middle] > target) {
            max = middle;
        } else if (nums[middle] < target) {
            min = middle;
        } else {
            return middle;
        }
        middle = (max + min) / 2;
    }
    if (nums[min] < target) {
        return middle + 1;
    }
    return middle;
}
