void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    if(k==0) return;
    int *p;
    int x=0;
    p=(int *)calloc(numsSize,sizeof(int));
    for(int i=numsSize-k;i<numsSize;i++){
        p[x]=nums[i];
        x++;
    }
    for(int i=0;i<numsSize-k;i++){
        p[x]=nums[i];
        x++;
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=p[i];
    }
    free(p);
}