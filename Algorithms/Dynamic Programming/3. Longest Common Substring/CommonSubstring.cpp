#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


int main ( ) {
	// :: finding longest common substring from these strings
	string A = "ajsdoaasmdakckwekwe";
	string B = "dajidjwncowkdasdpwk";
	
	
	// :: memoization 2d array
	int dp[A.size()+1][B.size()+1];
	for ( int i=0; i<=A.size(); i++ )
		for ( int j=0; j<=B.size(); j++ )  
			dp[i][j] = 0;
	
	// :: longest common substring algorithm
	for ( int i=1; i<=A.size(); i++ ) {
		for ( int j=1; j<=B.size(); j++ ) {
			if ( A[i-1]==B[j-1] ) dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = std::max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	// :: finding maximum length of common substring
	int max = 0;
	for ( int i=0; i<=A.size(); i++ ) {
		for ( int j=0; j<=B.size(); j++ ) {
			printf("%d ", dp[i][j]);
			if ( max < dp[i][j] ) max = dp[i][j];
		} printf("\n");
	} printf("\n");
	
	printf("Longest Common Substring Length: %d\n", max);
}
