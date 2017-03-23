#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	// :: values to be sorted
	string array[] = { "abc", "abbc", "abbb", "aaa", "acb", "abcb", "acbb", "aab" };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ )
		printf("%s ", array[i].c_str());
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
		string temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	
	// :: printing values in array
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", array[i].c_str());
}
