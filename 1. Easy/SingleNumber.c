struct pair {
    int num;
    bool paired;
};

void addNum(struct pair *nums, int num, int *size) {
    for (int i = 0; i < *size; i++) {
        if (nums[i].num == num) {
            nums[i].paired = true;
        }
    }
    nums[size].num = num;
    nums[size].paired = false;
    *(size)++;
}

int singleNumber(int* nums, int numsSize){
    int size = 0;
    struct pair *nums = malloc(sizeof(struct pair) * numsSize);
    for (int i = 0; i < numsSize; i++) {
           addNum(nums, num, &size);
    }
    for (int i = 0; i < size; i++) {
        if (nums[i].paired == false) {
            return nums[i].num;
        }
    }
    return 1;
}
