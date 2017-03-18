#include<stdio.h>
#define read(c) int c; scanf("%d", &c)
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("sample.txt", "r", stdin);
	
	int n, b, h, w;
	while ( scanf("%d %d %d %d", &n, &b, &h, &w) != EOF ) {
		
		unsigned int min = -1;
		repn(i,0,h) {
			read(cost);
			int total = cost*n;
			repn(j,0,w) {
				read(beds);
				if ( beds>=n && total<min ) min = total;
			}
		}
		
		min<=b? printf("%d\n", min) : printf("stay home\n");
	}
}
