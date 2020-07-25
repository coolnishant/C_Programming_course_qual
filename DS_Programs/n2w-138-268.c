/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj
	
n2w	
---------------------------------------*/

#include<stdio.h>

void Num2Words(int num, char **str){
	if(num == 0)
		return;
		
	Num2Words(num/10, str);
	
	switch(num % 10){
		case 0:
			strncat(str, "ZERO ", 5);
			break;
		case 1:
			strncat(str, "ONE ", 4);
			break;
		case 2:
			strncat(str, "TWO ", 4);
			break;
		case 3:
			strncat(str, "THREE ", 6);
			break;
		case 4:
			strncat(str, "FOUR ", 5);
			break;
		case 5:
			strncat(str, "FIVE ", 5);
			break;
		case 6:
			strncat(str, "SIX ", 4);
			break;
		case 7:
			strncat(str, "SEVEN ", 6);
			break;
		case 8:
			strncat(str, "EIGHT ", 6);
			break;
		case 9:
			strncat(str, "NINE ", 5);
			break;
	}
}

void main(){
	char str[201];
	int n, i;
	scanf("%d",&n);
	Num2Words(n, &str);
	printf("%d in words is\n%s\n",n, str);
}


