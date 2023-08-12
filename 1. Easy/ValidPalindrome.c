bool isPalindrome(char * s){
    int len = strlen(s);
    int start = 0;
    int end = len;
    while (start < end) {
        if (!(
             ((s[start] >= 48) && (s[start] <= 57)) || 
             ((s[start] >= 65) && (s[start] <= 90)) || 
             ((s[start] >= 97) && (s[start] <= 122)))) {
            start++;
        } else if (!(
             ((s[end] >= 48) && (s[end] <= 57)) || 
             ((s[end] >= 65) && (s[end] <= 90)) || 
             ((s[end] >= 97) && (s[end] <= 122)))) {
            end--;
        } else if (s[start] != s[end]) {
            if (s[start] >= 97) {
                if (s[start] - 32 != s[end]) {
                    return false;
                }
            } else if (s[start] >= 65) {
                if (s[start] + 32 != s[end]) {
                    return false;
                }
            } else {
                return false;
            }
            start++;
            end--;
        } else {
            start++;
            end--;
        }
    }
    return true;
}
