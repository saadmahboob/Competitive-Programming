#include<stdio.h>

/* function(linearSearch)
	Sequential searches the values by iterating over
	the array for an interval of one index at a time
*/
int linearSearch ( int A[], int size, int value ) { 
	int index = -1;		// :: index position of the value
	for ( int i=0; i<size && index==-1; i++ ) {
		if ( A[i] == value ) 
			index = i;
	}

	return index;
}

int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Array Content: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
	printf("\n");
	
	
	// :: searching for a value
	int value;
	printf("What value are you searching for?\n");
	scanf("%d", &value);
	
	
	// :: linearsearch function call
	int index = linearSearch(array, size, value);
	
	
	// :: printing result (whether value exists or not)
	index==-1? printf("Value Doesn't Exist in Container\n") : printf("Value %d, exists at %d position\n", value, (index+1));
}	
