/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int isprime(int x){
    if(x==1) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int* maxPrimes(int n, int s, int* returnSize) {
    int siz=20;
    int *sol=malloc(siz*sizeof(int));
    int i=2;
    int sum=0;
    int pos=0;
    while(i<=n){
        if(isprime(i)){
            if(pos+1==siz){
                siz+=20;
                sol=realloc(sol,siz*sizeof(int));
            }
            sol[pos]=i;
            if(sum+i>s) break;
            else{
                sum+=i;
                pos++;
            }
        }
        i++;
    }
    *returnSize=pos;
    return sol;
}

