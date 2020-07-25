/*-------------------------------------
			EMP ID: 138268
			Name: Nishant Raj
cz
---------------------------------------*/

#include<stdio.h>
int toDecimal(char val[]){
	int res = 0,i;
	for(i=0; i<strlen(val);i++){
		res = res*10+(val[i]-48);
	}
	return res;
}
int hexadecimalToDecimal(char hexVal[]){
  
    int len = strlen(hexVal),i;
    int base = 1; 
      
    int dec_val = 0; 
      
   for ( i=len-1; i>=0; i--) 
    {
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
            base = base * 16; 
        } 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
            base = base*16; 
        } 
        else if (hexVal[i]>='a' && hexVal[i]<='f') 
        { 
            dec_val += (hexVal[i] - 55 - 32)*base; 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 

int CountZeroBits(unsigned char c){
	int res = 0,i;
	for(i=0;i<8;i++,c>>=1){
		if((c&1) == 0)
			res++;
	}
	return res;
}
void main(){
	char in[10];
	unsigned char c;
	scanf("%s",in);
	if(in[0] == '0' && (in[1] == 'x' )){
		c = hexadecimalToDecimal(in);
	}
	else{
		c = toDecimal(in);
	}
	printf("CountZeroBits(%s) ==> %d\n",in,CountZeroBits(c));
}


