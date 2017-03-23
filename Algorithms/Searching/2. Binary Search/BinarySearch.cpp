#include<stdio.h>
#include<algorithm>
using namespace std;

/* function(binarySearch)
	This function performs binary search while iterating over half the array
*/
bool found = false;
void binarySearch ( int A[], int start, int mid, int end, int value ) {
	if ( start==mid || mid==end ) return;	// :: if no value found
	else if ( value>A[mid] ) {    // :: if value is greater than pointer
		if ( end-mid%2==0 ) binarySearch(A, mid+1, (mid+(end-mid)/2), end, value);
		else binarySearch(A, mid+1, (mid+(end-mid+1)/2), end, value);
	}
	else if ( value<A[mid] ) {	  // :: if value if less than pointer
		if ( mid-start%2==0 ) binarySearch(A, start, (mid-(mid-start)/2), mid-1, value);
		else binarySearch(A, start, (mid-(mid-start+1)/2), mid-1, value);
	}
	else if ( value==A[mid] ) printf("Value %d occurs at position %d\n", value, (mid+1));
}

int main ( ) {
	// :: values to be sorted
	int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
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
	
	
	// :: binary search function call
	binarySearch(array, 0, (size-1)/2, size-1, value);
	
	if ( !found ) printf("Value %d Doesn't Exist in Container\n", value);
}
