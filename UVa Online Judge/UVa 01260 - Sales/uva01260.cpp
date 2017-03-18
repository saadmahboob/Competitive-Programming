#include<stdio.h>
#include<vector>
#define pb push_back
#define vi vector<int>
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int tt; scanf("%d", &tt);
	repn(qq,1,tt+1) {
		int n, tmp, sum=0; scanf("%d", &n);
		
		vi v;
		repn(i,0,n) {
			scanf("%d", &tmp);
			v.pb(tmp);
			repn(j,0,v.size()-1) {
				if ( v[j]<=tmp ) sum++;
			}
		}
		
		printf("%d\n", sum);
	}
}
