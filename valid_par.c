bool isValid(char* s) {
    char* t;
    int n=strlen(s);
    t=(char*)malloc((n+2)*sizeof(char));
    char *a=t;
    *t='0';
    for(int i=0;i<n;i++){
        if(*s=='('){
            *t='(';
            t++;
            s++;
        }
        else if(*s=='['){
            *t='[';
            t++;
            s++;
        }
        else if(*s=='{'){
            *t='{';
            t++;
            s++;
        }
        else if(*s==')'){
             if(t==a) return false;
            if(*(t-1)=='('){
                t--;
                s++;
            }
            else return false;
        }
        else if(*s==']'){
            if(t==a) return false;
            if(*(t-1)=='['){
                t--;
                s++;
            }
             else return false;
        }
        else if(*s=='}'){
            if(t==a) return false;
            if(*(t-1)=='{'){
                t--;
                s++;
            }
             else return false;
        }
        
    }  
    if(t==a) return true;
    else return false;
}