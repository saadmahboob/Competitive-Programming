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
		
		
	// :: insertion sort loop
	for ( int i=1; i<size; i++ ) {
		int j = i; 
		
		// :: swap positions until array[j] is greater than array[j-1]
		while ( j>0 && array[j]<array[j-1] ) {
			int temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			
			j--;
		}
	}


	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
}
