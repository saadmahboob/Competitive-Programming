#include<math.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

/* function(multiply)
	This function performs karatsuba multiplication
*/
int multiply ( int x, int y ) {
    if ( x<100 || y<100 ) return x*y;
    
	int i_x, i_y;    // :: half pointers for numbers x and y
    for ( i_x=1 ; ; i_x++ ) if ( (x/pow(10,i_x))<1 ) break;
    for ( i_y=1 ; ; i_y++ ) if ( (y/pow(10,i_y))<1 ) break;
    
	int max = (int)fmax(i_x, i_y);    // :: pick the max one
    int multiplier = ceil(max/2);     // :: round off to ceiling value
    
    int a = floor(x/pow(10,multiplier));
    int b = fmod(x, pow(10,multiplier));
    int c = floor(y/pow(10,multiplier));
    int d = fmod(y, pow(10,multiplier));

	// :: 3 recursive multiplication calls
	// :: 3T(n/2)+O(n)
    int z1 = multiply(a, c);
    int z2 = multiply(b, d);
    int z3 = multiply((a+b), (c+d));
    
    // :: returning the result of multiplication
    return (z1*pow(10,multiplier*2)+(z3-z1-z2)*pow(10,multiplier)+z2);
}

// :: MAIN function
int main ( ) {
    printf("12*19 = %d\n", multiply(12, 19));
    printf("50*50 = %d\n", multiply(50, 50));
    printf("121*100 = %d\n", multiply(121, 100));
    printf("129*119 = %d\n", multiply(129, 119));
    printf("593*391 = %d\n", multiply(593, 391));
}
