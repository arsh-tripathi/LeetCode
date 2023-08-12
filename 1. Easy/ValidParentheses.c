bool isValid(char * s){
    int len = strlen(s);
    int last = 0;
    int bracket_arr[len];
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case '(':
                bracket_arr[last] = '(';
                last++;
                break;
            case '{':
                bracket_arr[last] = '{';
                last++;
                break;
            case '[':
                bracket_arr[last] = '[';
                last++;
                break;
            case ')':
                if (last == 0) {
                    return false;
                }
                if (bracket_arr[last-1] == '(') {
                    last--;
                } else {
                    return false;
                }
                break;
            case '}':
                if (last == 0) {
                    return false;
                }
                if (bracket_arr[last-1] == '{') {
                    last--;
                } else {
                    return false;
                }
                break;
            case ']':
                if (last == 0) {
                    return false;
                }
                if (bracket_arr[last-1] == '[') {
                    last--;
                } else {
                    return false;
                }
                break;
        }
    }
    if (last == 0) {
        return true;
    }
    return false;
}
