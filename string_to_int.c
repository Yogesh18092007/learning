int myAtoi(char* s) {
    double v=0;
    int sig=1;
    char str[20];
    int i=0;
    int j=0;
    while(1){
        if(*(s+i)=='0'||*(s+i)=='1'||*(s+i)=='2'||*(s+i)=='3'||*(s+i)=='4'||*(s+i)=='5'||*(s+i)=='6'||*(s+i)=='7'||*(s+i)=='8'||*(s+i)=='9'||*(s+i)=='-'||*(s+i)=='+'){
           if(*(s+i)=='+'){
            sig=1;
            i++;
           }
           else if(*(s+i)=='-'){
            sig=-1;
            i++;
           }
           break;
        }
        else if(*(s+i)==' '){
            i++;
        }
        else{
            return 0;
        }
    }
    while(1){
        if(*(s+i)=='0'||*(s+i)=='1'||*(s+i)=='2'||*(s+i)=='3'||*(s+i)=='4'||*(s+i)=='5'||*(s+i)=='6'||*(s+i)=='7'||*(s+i)=='8'||*(s+i)=='9'){
            char t=*(s+i);
            v=v*10;
            switch (t){
                case '0':
                    j=0;
                    break;
                case '1':
                    j=1;
                    break;
                case '2':
                    j=2;
                    break;
                case '3':
                    j=3;
                    break;
                case '4':
                    j=4;
                    break;
                case '5':
                    j=5;
                    break;
                case '6':
                    j=6;
                    break;
                case '7':
                    j=7;
                    break;
                case '8':
                    j=8;
                    break;
                case '9':
                    j=9;
                    break;
            }
            v=v+j;
            i++;
            if(v*sig<INT_MIN){
                return INT_MIN;
            }
            if(v*sig>INT_MAX){
                return INT_MAX;
            }
        }
        else{
            break;
        }
    }
    return v*sig;
}