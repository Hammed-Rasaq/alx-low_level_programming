#include <stdio.h>
 /**
  * main -prints alphabets in lowercase
  * prints all except q an e, followed by a new line
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
