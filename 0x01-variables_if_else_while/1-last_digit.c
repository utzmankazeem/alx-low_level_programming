#include <stdio.h>
#include <time.h>
/* more headers goes here*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	iint n, sum=0, firstDigit, lastDigit;
	scanf("%d", &n);

	lastDigit = n % 10;
	if (lastDigit > 5) {
	printf(lastDigit "is greater than 5 %d\n", n);
	}
	if (lastDigit == 0) {
	printf(lastDigit "and is zero %d\n", n);
	}
	if lastDigit(<6 && !0){
	printf(lastDigit is less than 6 and not 0)
	}
	return (0);
}
