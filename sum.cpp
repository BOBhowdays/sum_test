#include "sum.h"
 
int sum(int n) {
/*	int sum = 0;
	for(int i=0; i <= n; i++){
		sum += i;
	}
*/
	int s = (n+1)* n / 2;
	return s;
}
