#include<vector>
#include<time.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

// :: memoization container 
vector<int> memo;
	
/* function(fibonacci) 
	computes fibonacci term for a particular term number
*/	
int fibonacci ( int n ) {
	if ( n<=1 ) return 1;
	if ( n+1==memo.size() ) return memo[n];
	else return fibonacci(n-1)+fibonacci(n-2);
}

// :: MAIN function
int main ( ) {
	// :: settings values in container to abstain from recomputing
	for ( int i=0; i<10; i++ ) 
		memo.push_back(fibonacci(i));
		
	
	// :: fibonacci generator/memoization usage
	srand(time(NULL));
	for ( int i=0; i<10; i++ ) {
		int random = rand()%25;
		
		// :: if values aren't computed, recompute and memotize them
		if ( random>=memo.size() ) {
			for ( int j=memo.size(); j<=random; j++ ) 
				memo.push_back(fibonacci(j));
		}
		
		cout << random+1 << ": " << memo[random] << endl;
	}
}
