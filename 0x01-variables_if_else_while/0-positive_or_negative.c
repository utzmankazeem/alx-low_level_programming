#include <stdio.h>
#include <time.h>
/* more headers goes here */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n > 0){
		(printf("Is positive %d\n", n);
	 }
	 else if (n ==0){
	 	printf("is zero %d\n", n);
	 }
	 if (n < 0) 
	 	printf("is negative %d\n", n);
	return (0);
}
