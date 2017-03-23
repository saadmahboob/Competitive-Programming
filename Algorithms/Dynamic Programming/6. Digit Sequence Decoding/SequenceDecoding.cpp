#include<stdio.h>
#include<iostream>
using namespace std;

/* function(decodingString) 
	This function finds the number of possible 
	encoding for a digit sequence
	
	E.g: 1234 = ABCD, LCD, AWD
*/
int decodingString ( string digit ) {
	// :: memoization 
	int dp[digit.length()+1];  
	
	dp[0] = 1;
	dp[1] = 1;
	
	// :: Dynamic Programming Approach
	for ( int i=2; i<=digit.length(); i++ ) {
		dp[i] = 0;
		
		if ( digit[i-1] > '0' ) 
			dp[i] = dp[i-1];
		
		if ( digit[i-2] < '2' || ( digit[i-2] == '2' && digit[i-1] < '7' ) )
			dp[i] += dp[i-2];
	}
	
	return dp[digit.length()];
}

// MAIN function
int main ( ) { 
	cout << "1234 Encodings: " << decodingString("1234") << endl;
	cout << "129481304812 Encodings: " << decodingString("129481304812"); 
}
