#include<stdio.h>
#include<vector>
#include<algorithm>
#define vi vector<int>
#define pb push_back
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n, m, q, tmp, qq=1;
	while ( scanf("%d", &n) ) {
		if ( n==0 ) break;
		
		vi v, sum;
		repn(i,0,n) {
			scanf("%d", &tmp);
			v.pb(tmp);
			repn(j,0,v.size()-1) sum.pb(v[j]+tmp);
		}
		
		std::sort(sum.begin(), sum.end());
		scanf("%d", &q);
		printf("Case %d:\n", qq++);
		repn(i,0,q) {
			scanf("%d", &tmp);
			
			int k=0;
			printf("Closest sum to %d is ", tmp);
			while ( k<sum.size() && sum[k]<tmp ) k++;
			k==sum.size()?printf("%d.\n", sum[sum.size()-1]) : abs(sum[k]-tmp)<abs(sum[k-1]-tmp)? printf("%d.\n", sum[k]) : printf("%d.\n", sum[k-1]);
		}
	}
}
