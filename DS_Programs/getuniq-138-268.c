/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj

getuniq		
---------------------------------------*/

#include<stdio.h>

int GetUniqueElements(const int *ary, int count, int **outary){
 	int *res, i, co=1, k=0;
 	for(i=0;i<count-1;i++){
 		if(ary[i] != ary[i+1])
 			co++;
	}
	res = (int*) malloc(co*sizeof(int));
 	for(i=0;i<count-1;i++){
 		if(ary[i] != ary[i+1])
 			res[k++] = ary[i];
	}
 	res[k++] = ary[i];
	*outary = res;
	return co;
}

void main(){
	int i, *arr, n, *all, res;
	scanf("%d", &n);
	arr = (int *) malloc(n * sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	res = GetUniqueElements(arr, n, &all);
	printf("Unique Elements are \n");
	for(i=0;i<res;i++)
		printf("%d ",all[i]);
	printf("\n");
}


