int mySqrt(int x){
    long sqr = 0;
    long num = 0;
    while (sqr <= x) {
        num++;
        sqr = num * num;
    }
    return num - 1;
}
