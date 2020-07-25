/*-------------------------------------
		EMP ID: 138268
		Name: Nishant Raj

sortingTechniques
---------------------------------------*/

#include<stdio.h>

void swap(int *xp, int *yp){ 
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

//--------------------------Bubble Sort----------------------------

void bubbleSort(int a[], int n){ 
    int i, j;  
    for (i = 0; i < n-1; i++){
		for (j = 0; j < n-i-1; j++)
			if (a[j] > a[j+1])
				swap(&a[j], &a[j+1]); 
	}  
}

//--------------------------Selection Sort----------------------------


void selectionSort(int arr[], int n){
    int i, j, min_idx;  
    
    for (i = 0; i < n-1; i++){  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  

//--------------------------Insertion Sort----------------------------

void insertionSort(int a[], int n){
    int i, k, j;  
    for (i = 1; i < n; i++){
        k = a[i];  
        j = i - 1;

        while (j >= 0 && a[j] > k){  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = k;  
    }
}

//--------------------------Merge Sort----------------------------

void merge(int arr[], int l, int m, int r){
	int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    i = 0,j = 0, k = l;
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int arr[], int l, int r){ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
  		
		mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
}

//--------------------------Quick Sort----------------------------

void quicksort(int arr[], int first, int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}

//--------------------------Heap Sort----------------------------

void heapify(int arr[], int n, int i){
    int larg = i, l = 2*i + 1, r = 2*i + 2; 
  
    if (l < n && arr[l] > arr[larg]) 
        larg = l; 
    if (r < n && arr[r] > arr[larg]) 
        larg = r; 
   
    if (larg != i) 
    { 
        swap(&arr[i], &arr[larg]); 
        heapify(arr, n, larg); 
    } 
} 
   
void heapSort(int arr[], int n){
	int i;
    for (i = n/2-1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (i=n-1; i>0; i--){ 
        swap(&arr[0], &arr[i]); 
        heapify(arr, i, 0); 
    }
}


//---------------------------------------------------------
void printArraySorted(int a[], int n, char *srt){
	int i;
	printf("\n---------------------------------------\n%s Sorted Array is:\n", srt);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void main(){
	int org[] = {6, 15, 12, 4, 11, 12, 6, 10, 7, 2};
	int n = sizeof(org)/sizeof(int), i;
	int dup[n];
	
	printf("Original Array is:\n");
	for(i = 0; i < n; i++) {
		dup[i] = org[i];
		printf("%d ",org[i]);
	}
	printf("\n");
	
	bubbleSort(dup, n);
	
    printArraySorted(dup ,n, "Bubble");
    for(i = 0; i < n; i++) {
		dup[i] = org[i];
	}
	
	selectionSort(dup, n);
	
    printArraySorted(dup ,n, "Selection");
    for(i = 0; i < n; i++) {
		dup[i] = org[i];
	}
	
	insertionSort(dup, n);
	
    printArraySorted(dup ,n, "Insertion");
    for(i = 0; i < n; i++){
		dup[i] = org[i];
	}
    
	mergeSort(dup, 0, n-1);
	
    printArraySorted(dup ,n, "Merge");
    for(i = 0; i < n; i++){
		dup[i] = org[i];
	}
    
	quicksort(dup, 0, n-1);
	
    printArraySorted(dup ,n, "Quick");
    for(i = 0; i < n; i++){
		dup[i] = org[i];
	}
	
	heapSort(dup, n);
	
    printArraySorted(dup ,n, "Heap");
    
}


