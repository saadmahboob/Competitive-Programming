#include<iostream>
using namespace std;

/* function(KMP)
	This function checks if the pattern is contained 
	in the string using additive iterative method
*/
bool KMP ( string str, string pattern ) {
	int i=0, j=0;
	for ( int i=0; i<=str.size()-pattern.size(); i++ ) {
		
		while ( (i+j)<str.size() && str[i+j]==pattern[j] ) {
			// :: matching animation		
			cout << str << endl;
			for ( int k=0; k<i; k++ ) cout << " ";
			cout << pattern << endl;
			for ( int k=0; k<i+j; k++ ) cout << " ";
			cout << "^" << endl << endl;
			
			j++;
		}
	
		if ( j==pattern.size() ) return true;
		
		// :: KMP increment
		i = i+j;
		j = 0;
	}
	
	return false;
}

// :: MAIN function
int main ( ) {
	// :: pattern to find from the string (one valid/other invalid)
	string str = "here is example";
	string patternA = "example";
	string patternB = "exampled";
	
	KMP(str, patternA)? 
	    printf("### pattern found in string\n\n\n") :
	    printf("### pattern not found in string\n\n\n");
	
	
	KMP(str, patternB)? 
	    printf("### pattern found in string\n") :
	    printf("### pattern not found in string\n");
}
