bool isPalindrome(int x) {
    int a;
    a=x;
    double r=0;
    int n;
    if(x<0){
        return false;
    }
    while(a!=0){
        r=r*10;
        n=a%10;
        a=a/10;
        r=r+n;
    }
    if(x==r){
        return true;
    }
    else{
        return false;
    }
}