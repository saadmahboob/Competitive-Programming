#include<map>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
	printf("\n");
	
	
	// :: counting sort
	map<int, int> mp;
	for ( int i=0; i<size; i++ ) {
		// :: checking if value exists in map container
		if ( mp.find(array[i]) != mp.end() ) mp[array[i]] = 1;
		else mp[array[i]]++;
	}
	
	int index = 0;
	// :: setting map value to array
	for ( map<int, int>::iterator it=mp.begin(); it!=mp.end(); it++ ) {
		array[index] = it->first;
		index++;
	}
	
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", array[i]);
}
