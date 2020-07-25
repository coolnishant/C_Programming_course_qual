/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj

parity
---------------------------------------*/

#include<stdio.h>

unsigned char ComputeEvenParity(unsigned char val){
	return (val&1 == 1) ? val&(0x7f) : val|(0x80);
}

void main(){
	unsigned char c;
	scanf("%hhu",&c);
	printf("On change %hhu ==> %hhu\n", c, ComputeEvenParity(c));
}


