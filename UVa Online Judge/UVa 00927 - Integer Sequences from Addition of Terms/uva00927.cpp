#include<stdio.h>
#include<vector>
#include<math.h>
#define lld long long int 
#define pb push_back
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
    freopen("input.txt", "r", stdin);
    
    int tt; scanf("%d", &tt);
    repn(qq,1,tt+1) {
        vector<int> v; int n, d, k, tmp;
        lld sum = 0;
        
		scanf("%d", &n);
        repn(i,0,n+1) {
            scanf("%d", &tmp);
            v.pb(tmp);
        }
                     
        scanf("%d %d", &d, &k);
        repn(i,1,k+1) {
        	sum += i*d;
        	if ( sum>=k ) {
        		sum = 0;
            	repn(j,0,n+1) sum += v[j]*(lld)pow(i,j);
				printf("%lld\n", sum);
				break;
    		}
    	}
	}
}
