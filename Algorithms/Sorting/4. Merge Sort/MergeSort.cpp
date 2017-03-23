#include<stdio.h>

/* :: function(merge)
    This function merges the array in a sorted manner
    A temporary array keeps the sorted values for A[start...mid] and A[mid+1...end]
*/
void merge ( int A[], int start, int mid, int end ) {
	int i = start, j = mid+1, k = 0;
	
	int B[end-start+1];    // :: temporary array
	// :: filling array with sorted values
	while ( k<end-start+1 ) {
		if ( ( A[i]<A[j] && i<=mid && j<=end ) || ( j>end ) ) {
			B[k] = A[i];
			i++;
		} else if ( ( A[j]<A[i] && i<=mid && j<=end ) || ( i>mid ) ) {
			B[k] = A[j];
			j++;
		} 
		
		k++;
	}
	
	// :: writing values back to original array
	for ( int i=start; i<=end; i++ )
		A[i] = B[i-start];
}

/* :: function(mergesort)
    This function splits until no more than 1 element is left in the array cell
    It then merges the values in a sorted bottom up approach strategy
*/
void mergesort ( int A[], int start, int end ) {
	if ( end > start ) {   // :: performing mergesort if more than or equal to 1 element is left
		int mid = (start+end)/2;
		mergesort(A, start, mid);
		mergesort(A, mid+1, end);
		merge(A, start, mid, end);
	}
}

// :: MAIN FUNCTION!
int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
	printf("\n");
	
	
	// :: mergesort function call
	mergesort(array, 0, size-1);
	
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
}
