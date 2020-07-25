/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj
		
printfreq
---------------------------------------*/

#include<stdio.h>

void print_freq(char *line){
	int n = strlen(line), i;
	int ch[26] = {0};
	for(i=0;i<n;i++){
		if('a' <= line[i] && line[i] <= 'z')
			ch[line[i]-'a']++;
		else if('A' <= line[i] && line[i] <= 'Z')
			ch[line[i]-'A']++;
	}
	printf("Frequency of alphabates are:\n");
	for(i=0;i<26;i++)
		if(ch[i] != 0)
			printf("%c or %c => %d\n",i+'a', i+'A', ch[i]);
}

void main(){
	char str[201];
	scanf("%[^\n]s",str);
	print_freq(str);
}


