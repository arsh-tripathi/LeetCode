int climbStairs(int n){
    int prev = 1;
    int curr = 1;
    int temp = 0;
    for (int i = 0; i < n - 1; i++) {
        temp = curr;
        curr = curr + prev;
        prev = temp;
    }
    return curr;
}
