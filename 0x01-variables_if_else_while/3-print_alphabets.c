#include <stdio.h>
int main()
{
	char ch;
	putchar("Uppercase characters : \n");
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar("%c", ch);
	}
	putchar("Lowercase characters : \n");
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar("%c", ch);
	}
	return 0;
}
