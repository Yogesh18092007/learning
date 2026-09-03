#include <stdio.h>
int romanToInt(char* s) {
    int n;
    n=strlen(s);
    int arr[n];
    int val=0;
    for(int i=0;i<n;i++){
        if(*(s+i)=='I'){
            arr[i]=1;
        }
        if(*(s+i)=='V'){
            arr[i]=5;
        }
        if(*(s+i)=='X'){
            arr[i]=10;
        }
        if(*(s+i)=='L'){
            arr[i]=50;
        }
        if(*(s+i)=='C'){
            arr[i]=100;
        }
        if(*(s+i)=='D'){
            arr[i]=500;
        }
        if(*(s+i)=='M'){
            arr[i]=1000;
        }
    }
    for(int i=0;i<n;i++){
        val+=arr[i];
        if(i!=0){
               if(arr[i]>arr[i-1]){
                    val=val-(2*arr[i-1]);
                }
        }
    }
    return(val);

}