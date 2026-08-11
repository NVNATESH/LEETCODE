bool checkprime(int n)
{
    if(n==2) return 1;
    if(n%2==0  || 1>=n) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int* closestPrimes(int left, int right, int* returnSize) {
    int *arr = malloc(8);
    arr[0]=-1;
    arr[1]=-1;
    int prime[1000000]={0};
    int ind = 0;
    for(int i=left;i<=right;i++){
        if(checkprime(i)){
            prime[ind++]=i;
        }
    }

    int diff = INT_MAX;  

    for(int i=0;i<ind-1;i++){
        if((prime[i+1]-prime[i])<diff){
            diff = prime[i+1]-prime[i];
            arr[0]=prime[i];
            arr[1]=prime[i+1];
        }
    }
    *returnSize = 2;
    return arr;
}