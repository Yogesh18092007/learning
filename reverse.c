#include <limits.h>
int reverse(int x){
    long long r=0;
    int a;
    int n;
    a=x;
    while(a!=0){
        r=r*10;
        n=a%10;
        a=a/10;
        r+=n;
    }
    if (r<INT_MIN||r>INT_MAX){
        return 0;
    }
    else{
        return r;
    }
}