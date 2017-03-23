#include<vector>
#include<iostream>
using namespace std;

/* function(boyerMoore)
	This function checks if the pattern is contained 
	in the string using the last index of pattern
*/
bool boyerMoore ( string str, string pattern ) {
	// :: pre-processing container
	vector<int> position;
	for ( int i=pattern.size()-1; i<str.size(); i++ )
		if ( str[i]==pattern[pattern.size()-1] ) position.push_back(i);
	
	for ( int i=0; i<position.size(); i++ ) {
		int k=position[i];
		int j=pattern.size()-1;
		while ( j>=0 && str[k]==pattern[j] ) {
			// :: matching animation
			cout << str << endl;
			for ( int z=0; z<k-j; z++ ) cout << " ";
			cout << pattern << endl;
			for ( int z=0; z<k; z++ ) cout << " ";
			cout << "^" << endl << endl;
			
			--k;
			--j;
			
			if ( j==0 ) return true;
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
	
	boyerMoore(str, patternA)? 
	    printf("### pattern found in string\n\n\n") :
	    printf("### pattern not found in string\n\n\n");
	
	
	boyerMoore(str, patternB)? 
	    printf("### pattern found in string\n") :
	    printf("### pattern not found in string\n");
}
