#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	// :: values to be sorted
	string array[] = { "abc", "abbc", "abbb", "aaa", "acb", "abcb", "acbb", "aab" };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", array[i].c_str());
	printf("\n");
	
	
	// :: bubble sort
	for ( int i=0; i<size-1; i++ ) {
		// :: inner bubble sort loop
		for ( int j=0; j<size-i-1; j++ ) {
			// :: swap values if bubbles aren't sorted
			if ( array[j]>array[j+1] ) {
				string temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", array[i].c_str());
}
