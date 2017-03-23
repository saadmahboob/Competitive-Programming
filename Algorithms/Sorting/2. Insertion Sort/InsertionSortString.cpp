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
	
	
	// :: insertion sort
	for ( int i=1; i<size; i++ ) {
		int j = i;
		
		// :: swap positions until array[j] is greater than array[j-1]
		while ( j>0 && array[j]<array[j-1] ) {
			string temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			
			j--;
		}
	}
	
	
	// :: printing values in array
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", array[i].c_str());
}
