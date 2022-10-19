#include <stdio.h>
int main()
{
	int num;
	putchar("%x", &num);
	putchar("%x %d\n", num, num);
          putchar();	
	return 0;
}
