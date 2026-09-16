/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *p=(int*)malloc(digitsSize*sizeof(int));
    p=digits;
    int s=digitsSize-1;
    int found=0;
    *(p+s)+=1;
    while(s>=0){
        if(*(p+s)==10){
            if(s==0){
                p=(int*)realloc(p,(digitsSize+1)*sizeof(int));
                found=1;
                *(p+0)=0;
                for(int i=digitsSize;i>0;i--){
                    *(p+i)=*(p+i-1);
                }
                *(p+0)=1;
                s--;
            }
            else{
                *(p+s)=0;
                *(p+s-1)+=1;
                s--;
            }
        }
        else{
            break;
        }
    }
    if(found) *returnSize=digitsSize+1;
    else *returnSize=digitsSize;
    return p;
}