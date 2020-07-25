/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj

concat	
---------------------------------------*/

#include<stdio.h>
#define concat(s1,s2,delimiter) #s1 #delimiter #s2

void main(){
	printf("%s\n", concat(class,dummy,_));
	printf("%s\n", concat(one,two,/));
}


