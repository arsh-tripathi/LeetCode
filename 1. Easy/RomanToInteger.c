int romanToInt(char * s){
    int length = strlen(s);
    int prev = 0;
    int number = 0;
    for (int i = 0; i < length; i++) {
        switch (s[i]) {
            case 'I':
                if (i < length - 1) {
                    if (s[i+1] == 'V') {
                        number = number + 4;
                        i++;  
                    } else if (s[i+1] == 'X') {
                        number = number + 9;
                        i++;  
                    } else {
                        number = number + 1;
                    }
                } else {
                    number = number + 1;
                }
                break;
            case 'V':
                number = number + 5;
                break;
            case 'X':
                if (i < length - 1) {
                    if (s[i+1] == 'L') {
                        number = number + 40;
                        i++;  
                    } else if (s[i+1] == 'C') {
                        number = number + 90;
                        i++;  
                    } else {
                        number = number + 10;
                    }
                } else {
                    number = number + 10;
                }
                break;
            case 'L':
                number = number + 50;
                break;
            case 'C':
                if (i < length - 1) {
                    if (s[i+1] == 'D') {
                        number = number + 400;
                        i++;  
                    } else if (s[i+1] == 'M') {
                        number = number + 900;
                        i++;  
                    } else {
                        number = number + 100;
                    }
                } else {
                    number = number + 100;
                }
                break;
            case 'D':
                number = number + 500;
                break;
            case 'M':
                number = number + 1000;
                break;
            default:
                break;
        }

    }
    return number;
}
