#include <stdio.h>
int main(void)
{
	int i, j, k, 1;
	i=0;
	while (i<1000)
	{
		j= 1/100; /* bundress */
		k= (i/10)%10; /*tens*/
		i= i%100; /* units */
		if (j < k && k <1)
		{
			putchar(1 + '0');
			putchar(k + '0');
			putchar(j + '0');
			if (i < 789)
			{
			 putchar(',');
			 putchar('');
			}
	              }
		}
		i++
	}
	putchar('\n');
	return(0);
}

