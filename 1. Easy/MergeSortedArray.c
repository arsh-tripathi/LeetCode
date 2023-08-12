void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *ret = malloc(sizeof(int)*(m+n));
    int i = 0;
    int j = 0;
    for (int pos = 0; pos < m + n; pos++) {
        if ( (i < m) && ( (j >= n) || (nums1[i] < nums2[j]) ) ) {
            ret[pos] = nums1[i];
            i++;
        } else {
            ret[pos] = nums2[j];
            j++;
        }
    }
    for (int k = 0; k < m + n; k++) {
        nums1[k] = ret[k];
    }
    free(ret);
}
