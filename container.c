int maxArea(int* height, int heightSize){
    int i = 0;
    int j = heightSize - 1;
    int res = 0;

    while (i < j) {
        int minH = height[i] < height[j] ? height[i] : height[j];
        int area = (j - i) * minH;
        if (area > res) res = area;

        if (height[i] < height[j]) i++;
        else j--;
    }

    return res;
}
    



int maxArea(int* height, int heightSize) {
    int high=0;
    int a=heightSize;
    for(int i=0;i<a/2;i++){
        for(int j=i+1;j<a;j++){
            int b;
            if(*(height+i)<*(height+j)){
                b=*(height+i);
            }
            else{
                b=*(height+j);
            }
            if(high<b*(j-i)){
                high=b*(j-i);
            }
        }
    }
    return high;
}