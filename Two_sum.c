int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr;
    arr=(int *)malloc(2*sizeof(int));
    *returnSize=2;
    for (int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
            if(i==j){
                continue;
            }
            if(nums[i]+nums[j]==target){
                arr[0]=i;
                arr[1]=j;
                return arr;
            }
        }
    }
    return NULL;
}