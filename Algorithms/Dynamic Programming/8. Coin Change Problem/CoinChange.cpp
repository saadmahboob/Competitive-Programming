#include<stdio.h>
using namespace std;

/* function(coinChange)
	Checks for all possible changes that 
	exists to satisfy a coin value
*/
int coinChange ( int coin[], int size, int value ) { 
	int dp[value+1][size];
	
	// :: Dynamic Programming Approach
	for ( int i=0; i<size; i++ )
		dp[0][i] = 1;
		
	for ( int i=1; i<=value; i++ ) {
		for ( int j=0; j<size; j++ ) {
			// Counting solutions including coin[j]
			int x = (i-coin[j]>=0)? dp[i-coin[j]][j] : 0;
			
			// Counting solutions by excluding coin[j]
			int y = (j>=1)? dp[i][j-1] : 0;
			
			// Total Count
			dp[i][j] = x+y;
		}
	}
	
	return dp[value][size-1];
}

// MAIN function
int main ( ) {
	int coin[] = { 1, 2, 3 };
	int size = sizeof(coin)/sizeof(coin[0]);
	
	int value = 4;
	printf("Total Possible Coin Changes: %d", coinChange(coin, size, value));
}
