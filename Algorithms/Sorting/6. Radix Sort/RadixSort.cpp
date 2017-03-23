#include<vector>
#include<sstream>
#include<iostream>
using namespace std;

/* function(NumberToString)
	This function converts and int datatype to a string datatype
*/
string NumberToString ( int N ) {
	stringstream ss;
	ss << N;
	return ss.str();
}


/* function(radixsort)
	This function performs radixsort
*/
void radixsort ( string A[], int size, int index) {
	// :: creating vector containers for radix sort
	vector<string> zero, one, two, three, four, five, six, seven, eight, nine;	
	
	// :: adding values to containers
	for ( int i=0; i<size; i++ ) {
		if ( A[i][index] == '0' ) zero.push_back(A[i]);
		else if ( A[i][index] == '1' ) one.push_back(A[i]);
		else if ( A[i][index] == '2' ) two.push_back(A[i]);
		else if ( A[i][index] == '3' ) three.push_back(A[i]);
		else if ( A[i][index] == '4' ) four.push_back(A[i]);
		else if ( A[i][index] == '5' ) five.push_back(A[i]);
		else if ( A[i][index] == '6' ) six.push_back(A[i]);
		else if ( A[i][index] == '7' ) seven.push_back(A[i]);
		else if ( A[i][index] == '8' ) eight.push_back(A[i]);
		else if ( A[i][index] == '9' ) nine.push_back(A[i]);
	}
	
	// :: rewritting values to array from container
	int aIndex = 0;
	for ( int i=0; i<zero.size(); i++ ) { A[aIndex] = zero[i]; ++aIndex; }
	for ( int i=0; i<one.size(); i++ ) { A[aIndex] = one[i]; ++aIndex; }
	for ( int i=0; i<two.size(); i++ ) { A[aIndex] = two[i]; ++aIndex; }
	for ( int i=0; i<three.size(); i++ ) { A[aIndex] = three[i]; ++aIndex; }
	for ( int i=0; i<four.size(); i++ ) { A[aIndex] = four[i]; ++aIndex; }
	for ( int i=0; i<five.size(); i++ ) { A[aIndex] = five[i]; ++aIndex; }
	for ( int i=0; i<six.size(); i++ ) { A[aIndex] = six[i]; ++aIndex; }
	for ( int i=0; i<seven.size(); i++ ) { A[aIndex] = seven[i]; ++aIndex; }
	for ( int i=0; i<eight.size(); i++ ) { A[aIndex] = eight[i]; ++aIndex; }
	for ( int i=0; i<nine.size(); i++ ) { A[aIndex] = nine[i]; ++aIndex; }
 	
 	// :: checking if recursive call to radixsort can be made
	if ( index>0 ) radixsort(A, size, index-1);
}


// MAIN function
int main ( ) {
	// :: values to be sorted
	int array[] = { 40, 100, 90, 10, 50, 30, 80, 60, 70, 20 };
	int size = sizeof(array)/sizeof(array[0]);
	
	
	// :: Converting integer to string array
	int max = 0;
	string A[size]; 
	for ( int i=0; i<size; i++ ) {
		A[i] = NumberToString(array[i]);
		if ( A[i].length() > max ) max = A[i].length();   // :: finding length of max number
	}
	
	
	// :: appending zero to adjust every digit to same number
	for ( int i=0; i<size; i++ ) {
		while ( A[i].length() != max ) A[i] = '0' + A[i];
 	}
	
	
	// :: printing values in array before sorting them
	printf("Before Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", A[i].c_str());
	printf("\n");
	
	
	// :: radixsort function call
	radixsort(A, size, max-1);
	
	
	// :: removing zeroes that were appended
	for ( int i=0; i<size; i++ ) {
		while ( A[i][0] == '0' ) A[i] = A[i].substr(1, A[i].size()-1);
	}
	
	
	// :: printing values in array after sorting them
	printf("After Sorting: ");
	for ( int i=0; i<size; i++ ) 
		printf("%s ", A[i].c_str());
}	

