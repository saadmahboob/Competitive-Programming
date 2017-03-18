#include<stdio.h>
#include<vector>
#define pb push_back
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int k;
	while ( scanf("%d", &k) != EOF ) {
		vector<int> vec;
		repn(y,k+1,2*k+1) {
			if ( (y*k)%(y-k)==0 ) vec.pb(y);
		}
		
		printf("%d\n", vec.size());
		repn(i,0,vec.size()) 
			printf("1/%d = 1/%d + 1/%d\n", k, (k*vec[i])/(vec[i]-k), vec[i]);
	}
}
