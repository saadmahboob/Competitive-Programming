#include<vector>
#include<stdio.h>
#include<algorithm>
#define pb push_back
#define read(n) int n; scanf("%d", &n)
#define REPN(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("sample.txt", "r", stdin);
	
	read(t);
	while ( t-- ) {
		vector<int> v;
		REPN(i,0,3) {
			read(temp);
			v.pb(temp);
		}
		
		std::sort(v.begin(), v.end());
		printf("%d\n", v[1]);
	}
}
