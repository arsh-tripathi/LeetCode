bool isPalindrome(int x){
    if (x < 0) {
        return false;
    }
    uint n = x;
    uint reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    if (reverse == x) {
        return true;
    }
    return false;
}
