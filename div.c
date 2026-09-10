
int divide(int dividend, int divisor) {
    int v=0;
    if(dividend==0||divisor==0) return 0;
    int dd=dividend;
    int dv=divisor;
    if(dd>0&&dv>0){
        if(dd<dv) return 0;
        if(dv==1) return dd;
        while(dd>=dv){
            dd=dd-dv;
            v++;
        }
        return v;
    }
    else if(dd<0&&dv<0){
        if(dd>dv) return 0;
        if(dv==-1) {
            if(dd==INT_MIN) return (INT_MAX);
            else return (0-dd);
        }
        while(dd<=dv){
            dd=dd-dv;
            if(v==INT_MAX) return v;
            else v++;
        }
        return v;
    }
    else if(dd<0&&dv>0){
        if((0-dv)<dd) return 0;
        if(dv==1) return dd;
        while((0-dv)>=dd){
            dd=dd+dv;
            v--;
        }
        return v;
    }
    else if(dd>0&&dv<0){
        if(dv<(0-dd)) return 0;
        if(dv==-1) return (0-dd);
        while(dv>=(0-dd)){
            dd=dd+dv;
            v--;
        }
        return v;
    }
    return v;
}