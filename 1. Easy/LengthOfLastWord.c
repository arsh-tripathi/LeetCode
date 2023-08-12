int lengthOfLastWord(char * s){
    int prev_word_len = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != ' ') {
            if ((i != 0) && (s[i-1] == ' ')) {
                prev_word_len = 0;
            }
            prev_word_len++;
        }
    }
    return prev_word_len;
}
