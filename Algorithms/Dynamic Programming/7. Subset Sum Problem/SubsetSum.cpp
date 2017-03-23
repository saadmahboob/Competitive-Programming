#include<stdio.h>
using namespace std;

/* function(isSubsetSum)
	Checks if there exists a subset that 
	has values that add up to sum
*/
bool isSubsetSum ( int set[], int size, int sum ) {
	bool dp[sum+1][size+1];
	
	// :: Dynamic Programming Approach
	for ( int i=0; i<=size; i++ )
		dp[0][i] = true;
		
	for ( int i=1; i<=sum; i++ )
		dp[i][0] = false;
		
	// :: Filling memoization container
	for ( int i=1; i<=sum; i++ ) {
		for ( int j=1; j<=size; j++ ) {
			dp[i][j] = dp[i][j-1];
			
			if ( i>=set[j-1] ) 
				dp[i][j] = dp[i][j] || dp[i-set[j-1]][j-1]; 
		}
	}
	
	return dp[sum][size];
}

// MAIN function
int main ( ) {
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int size = sizeof(set)/sizeof(set[0]);
	
	isSubsetSum(set, size, 9)? printf("Sum 9 Exists\n") : printf("Sum Doesn't 9 Exist\n");
	isSubsetSum(set, size, 10)? printf("Sum 10 Exists\n") : printf("Sum Doesn't 10 Exist\n");
	isSubsetSum(set, size, 11)? printf("Sum 11 Exists\n") : printf("Sum Doesn't 11 Exist\n");
	isSubsetSum(set, size, 12)? printf("Sum 12 Exists\n") : printf("Sum Doesn't 12 Exist\n");
	isSubsetSum(set, size, 13)? printf("Sum 13 Exists\n") : printf("Sum Doesn't 13 Exist\n");
}
