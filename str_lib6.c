#include<stdio.h>
#include<string.h>

void main (void)
{
	char str1[10] = "first";
	char *src = str1;
        int len = 0;

	while (*src != 0)
	{
		len++;
		src++;
	}
	
	printf ("The length of the string '%s' is %d or %d\n", str1, strlen (str1), len);
}



