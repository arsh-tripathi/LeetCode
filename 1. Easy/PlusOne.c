/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *ret = malloc(sizeof(int) * (digitsSize + 1));
    int carry = 1;
    int sum = 0;
    for (int i = digitsSize - 1; i >= 0; i--) {
        sum = digits[i] + carry;
        ret[i+1] = sum % 10;
        carry = sum / 10;
    }
    if (carry != 0) {
        *ret = carry;
        *returnSize = digitsSize + 1;
        return ret;
    } else {
        *returnSize = digitsSize;
        return ret + 1;
    }
}   
