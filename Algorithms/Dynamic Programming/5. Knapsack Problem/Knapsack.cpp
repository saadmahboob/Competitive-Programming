#include<stdio.h>
#include<algorithm>
using namespace std;

/* function(knapsack)
	This function finds the maximum possible value
	that can be obtained by picking objects with 
	total weight of less than or equal to sacks weight
*/
int knapsack ( int total, int v[], int w[], int size ) {
	int dp[size+1][total+1];
	
	// :: Dynamic Programming Approach
	for ( int i=0; i<=size; i++ ) {
		for ( int j=0; j<=total; j++ ) {
			if ( i==0 || j==0 ) 
				dp[i][j] = 0;
			else if ( w[i-1]<=j ) 
				dp[i][j] = std::max(v[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
			else 
				dp[i][j] = dp[i-1][j];
		}
	}
	
	return dp[size][total];
}

// MAIN function
int main ( ) { 
	// :: Values and Weights
	int value[] = { 10, 20, 40, 10, 30, 10, 40, 10, 20, 30 };
	int weight[] = { 20, 30, 60, 30, 20, 10, 20, 30, 20, 40 };
	
	int total = 100;
	
	printf("Total Value Gathered: %d", knapsack(total, value, weight, sizeof(value)/sizeof(value[0])));
}
