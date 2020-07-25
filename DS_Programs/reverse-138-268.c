/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj
		
reverse
------------------------------------------*/

#include<stdio.h>
void ReverseString(char *pStr){
	int n = strlen(pStr)-1,i=0;
	char te;
	printf("%s ",pStr);
	while(i<n){
		te = *(pStr+i);
		*(pStr+i) = *(pStr+n);
		*(pStr+n) = te;
		i++;
		n--;
	}
	printf("==reverse==> %s\n",pStr);
}
void main(){
	char str[501];
	scanf("%s",str);
	ReverseString(str);
}


