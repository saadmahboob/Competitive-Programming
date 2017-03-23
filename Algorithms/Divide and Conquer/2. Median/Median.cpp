#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

/* function(Median)
	This function finds the actual number that should be at a
	particular position using Median Divide and Conquer Algorithm
*/
void median ( vector<int> vec, int pos, int size ) {
	if ( vec.size()>1 ) {
		vector<int> small, equal, large;
		for ( int i=0; i<size; i++ ) {
			if ( vec[i]<vec[0] ) small.push_back(vec[i]);
			else if ( vec[i]>vec[0] ) large.push_back(vec[i]);
			else if ( vec[i]==vec[0] ) equal.push_back(vec[i]);
		}
		
		if ( small.size()>pos ) median(small, pos, small.size());
		else if ( small.size()+equal.size()>pos ) printf("%d\n", vec[0]);
		else median(large, pos-(small.size()+equal.size()), large.size());
	} else printf("%d\n", vec[0]);
}

int main ( ) {
	// :: values to be searched from 
	int array[] = { 11, 36, 5, 21, 8, 13, 2, 20, 5, 4, 1 };
	int size = sizeof(array)/sizeof(array[0]);
	
	vector<int> vec (array, array+size);
	
	// :: printing values in array before sorting them
	printf("List Content: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", vec[i]);
	printf("\n");
	
	
	// :: sorting for visuals	
	vector<int> sort = vec;
	std::sort(sort.begin(), sort.end());
	
	printf("Sorting Visual: ");
	for ( int i=0; i<size; i++ ) 
		printf("%d ", sort[i]);
	printf("\n\n");
	
	
	// :: Printing element wrt position using Median
	for ( int i=0; i<size; i++ ) {
		printf("%d Smallest Element: ", (i+1));
		median(vec, i, size);
	}
}
