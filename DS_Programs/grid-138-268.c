/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj
		
grid
---------------------------------------*/

#include<stdio.h>

void main(int argc, char** argv){
	char *a = argv[1];
	int n = strlen(a), i, j;
	for(i=0;i<n;i++)
		printf("%c ",a[i]);
	printf("\n");
	for(i = 1 ;i < n-1;i++){
		printf("%c ",a[i]);
		for(j=0;j<n-2;j++)
			printf("  ");
		printf("%c\n",a[n-i-1]);
	}
	for(i=0;i<n;i++)
		printf("%c ",a[n-i-1]);
}
