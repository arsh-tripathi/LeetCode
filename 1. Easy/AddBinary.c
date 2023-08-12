char * addBinary(char * a, char * b){
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = 0;
    if (len_a > len_b) {
        len  = len_a;
    } else {
        len = len_b;
    }
    char *sum = malloc(sizeof(char) * (len+2));
    sum[len+1] = '\0';
    int carry = 0;
    int curr_a = 0;
    int curr_b = 0;
    int i = len_a - 1;
    int j = len_b - 1;
    while ((i >= 0) || (j >= 0)) {
        if ((i >= 0) && (j >= 0)) {
            switch (a[i]) {
                case '0':
                    curr_a = 0;
                    break;
                case '1':
                    curr_a = 1;
                    break;
                default:
                    break;
            }
            switch (b[j]) {
                case '0':
                    curr_b = 0;
                    break;
                case '1':
                    curr_b = 1;
                    break;
                default:
                    break;
            }   
        } else if (i >= 0) {
            switch (a[i]) {
                case '0':
                    curr_a = 0;
                    break;
                case '1':
                    curr_a = 1;
                    break;
                default:
                    break;
            }
            curr_b = 0;
        } else {
            curr_a = 0;
            switch (b[j]) {
                case '0':
                    curr_b = 0;
                    break;
                case '1':
                    curr_b = 1;
                    break;
                default:
                    break;
            }
        }
        sum[len] = (curr_a + curr_b + carry) % 2 + 48;
        carry = (curr_a + curr_b + carry) / 2;
        len--;
        i--;
        j--;
    }
    if (carry != 0) {
        sum[0] = carry + 48;
        return sum;
    } else {
        return sum + 1;
    }
}
