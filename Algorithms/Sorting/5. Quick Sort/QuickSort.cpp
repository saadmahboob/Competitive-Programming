#include<stdio.h>

/* function(quicksort)
    This function performs quicksort
*/
void quicksort ( int A[], int pivot, int start, int end ) {
	// :: setting the pointers
	int i = start;
	int j = end;
	
	// :: changing pointers(i, j) according to pivots value
	while ( j>i ) {
		while ( A[i]<=A[pivot] && i<end ) i++;
		while ( A[j]>=A[pivot] && j>=start ) j--; 
		
		if ( j>i ) {
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	
	// :: if array isn't sorted then move the pivot to its original position
	if ( j!=0 ) {
		int temp = A[pivot];
		A[pivot] = A[j];
		A[j] = temp;
	}
	
	// :: recursive condition to call quicksort
	if ( j>0 && j<end ) {
		if ( j>0 ) quicksort(A, 0, 1, j-1);
		if ( j+2<end ) quicksort(A, j+1, j+2, end);
	}
}

int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
	printf("\n");
	
	
	// :: quicksort function call
	quicksort(array, 0, 1, size-1);
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
}	
