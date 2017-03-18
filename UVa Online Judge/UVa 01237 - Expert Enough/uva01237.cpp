#include<stdio.h>
#include<utility>
#include<vector>
#include<iostream>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define psii pair<string, pi>
#define vpsii vector<psii >
#define repn(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int tt; scanf("%d", &tt);
	repn(qq,1,tt+1) {
		int n, q, cost, l, h; scanf("%d", &n);
		
		vpsii v;
		string name;
		repn(i,0,n) {
			cin >> name;
			scanf("%d %d", &l, &h);
			v.pb(mp(name, mp(l, h)));
		}
			
		scanf("%d", &q);
		repn(i,0,q) {
			int f=0, in=0;
			
			scanf("%d", &cost);
			repn(j,0,n) {
				if ( v[j].se.fi<=cost && v[j].se.se>=cost ) { 
					f++;
					in=j;
				}
			}
			
			(f==0||f>1)? printf("UNDETERMINED\n") : printf("%s\n", v[in].fi.c_str());
		} if(qq!=tt) printf("\n");
	}
}
