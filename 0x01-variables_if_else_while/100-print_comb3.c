#include <stdio.h>
int main(void) {
	int i, n;
	for (n =1; n < 1000000; n++) {
	  for (i = n){
		  if(1/10 %10 > i % 10) break;
		  if((i /=10) ==0) {
			 putchar("%d\n", n) break;
		  }
		 }
 	   } 
	}
