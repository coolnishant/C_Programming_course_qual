/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj
		
flw
---------------------------------------*/

#include<stdio.h>

int FindLongestWord(const char *pStr, char **pWord){
	int n = strlen(pStr),i=0,j=0,res=0;
	char *te;
	while(i<n){
		if(pStr[i] == ' '){
			if(i-j > res){
				printf("%d %d\n",i,j);
				te = &pStr[j];
				res = i-j;
			}
			j=i+1;
		}
		i++;
	}
	if(i-j > res){
		printf("%d %d\n",i,j);
		te = &pStr[j];
		res = i-j;
	}
	*pWord = te;
	
	return res;
}

void main(){
	char str[501], *p = NULL;
	int res = 0;
	scanf("%[^\n]s",str);
	res = FindLongestWord(str, &p);
	printf("Longest Word in '%s'\n\tis\n",str);
	p[res]= '\0';
	printf("of length %d",res);
	printf(" is '%s'\n",p);
}


