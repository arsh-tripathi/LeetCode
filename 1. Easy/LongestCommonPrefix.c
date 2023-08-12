char * longestCommonPrefix(char ** strs, int strsSize){
    int length = 0;
    int curr = 0;
    for (int i = 0; i < strsSize; i++) {
        curr = strlen(strs[i]);
        if (i == 0) {
            length = curr;
        }
        if (length > curr) {
            length = curr;
        }
    }
    char *return_string = malloc(sizeof(char)*(length + 1));
    char current = 'l';
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < strsSize; j++) {
            if (j == 0) {
                current = strs[0][i];
            } else if (strs[j][i] != current) {
                return_string[i] = '\0';
                return return_string;
            }
        }
        return_string[i] = current;
    }
    return_string[length] = '\0';
    return return_string;
}
