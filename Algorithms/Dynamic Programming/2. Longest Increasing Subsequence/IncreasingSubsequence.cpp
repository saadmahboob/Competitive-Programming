#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	// :: finding longest increasing subsequence from this string
	string str = "azdxepmqaby";
	
	
	// :: memoization array
	int dp[str.size()];
	for ( int i=0; i<str.size(); i++ ) 
		dp[i] = 1;
		
	
	// :: longest increasing subsequence algorithm
	for ( int i=1; i<str.size(); i++ ) {
		for ( int j=i-1; j>=0; j-- ) {
			if ( str[i]>str[j] && dp[i]<dp[j]+1 ) 
				dp[i]=dp[j]+1;
		}
	}
	
	
	// :: maximum length
	int max = dp[0];
	for ( int i=1; i<str.size(); i++ ) {
		if ( max<dp[i] ) 
			max = dp[i];
	}
	
	printf("Longest Increasing Subsequence Length: %d\n", max);
}
