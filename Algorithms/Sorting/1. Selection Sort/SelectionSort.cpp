#include<stdio.h>

int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
	printf("\n");
	
	
	// :: selection sort loop
	for ( int i=0; i<size; i++ ) {
		int index = i; // :: set min value index to the current pointer(i)
	
		// :: selection sort inner loop
		for ( int j=i+1; j<size; j++ ) {
			// :: find the minimum value in the array
			if ( array[j] < array[index] ) 
				index = j;
		}
		
		// :: swap values at the current pointer(i) and min index
		int temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
}
