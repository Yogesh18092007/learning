int singleNumber(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1-i;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    int i=0;
    while(i<numsSize){
        if(i<numsSize-1){
            if(nums[i]==nums[i+1]){
                int k=0;
                for(k=i+1;k<numsSize;k++){
                    if(nums[k]!=nums[i]) break;
                }
                i=k;
            }
            else return nums[i];
        }
        else return nums[i];
    }
    return 0;
}
