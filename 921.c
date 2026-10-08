int minAddToMakeValid(char* s) {
    int top=-1;
    int i=0;
    int ans=0;
    char stack[strlen(s)+1];
    while(s[i]!='\0'){
        if(s[i]=='('){
            stack[++top]='(';
        }
        else{
            if(top>-1){
                if(stack[top]=='('){
                    top--;
                }
                else ans++;
            }
            else ans++;
        }
        i++;
    }
    while(top!=-1){
        top--;
        ans++;
    }
    return ans;
}
