int strStr(char* haystack, char* needle) {
    int pos=-1;
    for(int i=0;i<strlen(haystack);i++){
        if(pos!=-1) break;
        if(haystack[i]==needle[0]){
            int k=i;
            for(int j=0;j<strlen(needle);j++){
                if(haystack[k]==needle[j]){
                    if(j==strlen(needle)-1){
                        pos=i;
                        break;
                    }
                    k++;
                }
                else break;
            }
        }
    }
    return pos;
}