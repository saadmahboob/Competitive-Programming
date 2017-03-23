#include<iostream>
using namespace std;

/* function(min)
	find minimum of the 3 values
*/
int min ( int a, int b, int c ) {
	return std::min(std::min(a, b), c);
}

/* function(editDistance)
	transforming string A to string B whilst penalizing 
	1 count penalty for each insert, delete, modify operation
*/
int editDistance ( string A, string B, int lenA, int lenB ) {
	int dp[lenA+1][lenB+1];
	
	// :: Dynamic Programming Approach
	for ( int i=0; i<=lenA; i++ ) {
		for ( int j=0; j<=lenB; j++ ) {
			if ( i==0 ) dp[i][j] = j;
			else if ( j==0 ) dp[i][j] = i;
			else {
				if ( A[i-1]==B[j-1] )    // :: if string characters equal
					dp[i][j] = dp[i-1][j-1];
				else     // :: if string characters are not equal
					dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
			}
		}
	}
	
	return dp[lenA][lenB];
}
	
// MAIN function
int main ( ) { 
	string A = "whyarewedoingthis";
	string B = "becauseeditdistance";
	cout << editDistance(A, B, A.length(), B.length()) << endl << endl;
	
	string C = "sunday";
	string D = "saturday";
	cout << editDistance(C, D, C.length(), D.length());
}
