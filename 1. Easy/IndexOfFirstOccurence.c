int strStr(char * haystack, char * needle){
    int index = -1;
    int curr = 0;
    int lenh = strlen(haystack);
    int lenn = strlen(needle);

    for (int i = 0; i < lenh - lenn + 1; i++) {
        if (haystack[i] == needle[0]) {
            for (int j = i; j < i + lenn; j++) {
                if (haystack[j] == needle[curr]) {
                    curr++;
                } else {
                    curr = 0;
                    break;
                }
            }
        } else {
            curr = 0;
        }
        if (curr == lenn) {
            return i;
        }
    }

    return index;
}
