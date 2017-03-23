#include<iostream>
using namespace std;

/* function(BruteForce)
	This function checks if the pattern is contained 
	in the string using iterative method
*/
bool bruteForce ( string str, string pattern ) {
	int i=0, j=0;    // :: setting pointers
	
	for ( int i=0; i<=str.length()-pattern.length(); i++ ) {
		int j=0;
		while ( (i+j)<str.length() && str[i+j]==pattern[j] ) {
			j++;
			
			if ( j==pattern.length() ) return true;
		}
	}
		
	return false;	
}

// :: MAIN function
int main ( ) {
	// :: pattern to find from the string (one valid/other invalid)
	string str = "here is example";
	string patternA = "example";
	string patternB = "exampled";
	
	bruteForce(str, patternA)? 
	    printf("pattern found in string\n") :
	    printf("pattern not found in string\n");
	
	
	bruteForce(str, patternB)? 
	    printf("pattern found in string\n") :
	    printf("pattern not found in string\n");
}
