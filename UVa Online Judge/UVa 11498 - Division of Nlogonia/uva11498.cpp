#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("sample.txt", "r", stdin);
	
	int t; 
	while ( scanf("%d", &t) != 0 ) {
		if ( t==0 ) break;
		int a, b, x, y;
		scanf("%d %d", &x, &y);
		
		REPN(i,0,t) {
			scanf("%d %d", &a, &b);
			if ( a==x || b==y ) printf("divisa\n");
			else if ( a>x && b>y ) printf("NE\n");
			else if ( a>x && b<y ) printf("SE\n");
			else if ( a<x && b>y ) printf("NO\n");
			else printf("SO\n");
		}
	}
}
