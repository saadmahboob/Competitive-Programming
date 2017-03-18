#include<stdio.h>
#define lld long long int
#define readLong(n) lld n; scanf("%lld", &n)
using namespace std;

int main ( ) {
	freopen("sample.txt", "r", stdin);
	
	readLong(t);
	while(t--) {
		lld a, b;
		scanf("%lld %lld", &a, &b);
		
		if ( a==b ) printf("=\n");
		else if ( a>b ) printf(">\n");
		else printf("<\n");
	}
}
