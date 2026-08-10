/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n+1;
    int *ptr = (int*)malloc((n+1)*sizeof(int));
    int b =0,a= n+1,i=0;
    while(a--){
        int c = 0,i=b;
        while(i){
            c += i%2;
            i = i/2;
        }
        ptr[b] = c;
        b++;
    }
    return ptr;
}