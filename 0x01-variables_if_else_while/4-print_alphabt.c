#include <stdio.h>
 /**
  * main -prints alphabets in lowercase
  * print all except q an e, followed by a new line
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
