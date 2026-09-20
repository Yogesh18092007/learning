char* longestCommonPrefix(char** strs, int strsSize) {
    char *s=(char *)calloc(201,sizeof(char));
    char t;
    int i=0;
    for(i=0;i<strlen(strs[0]);i++){
        t=*(strs[0]+i);
        if(strsSize==1) return *(strs);
        for(int j=1;j<strsSize;j++){
            if(*(strs[j]+i)=='\0'||*(strs[j]+i)!=t){
                s[i]='\0';
                return s;
            }
            if(*(strs[j]+i)==t){
                s[i]=t;
            }
        }
    }
    s[i]='\0';
    return s;
}