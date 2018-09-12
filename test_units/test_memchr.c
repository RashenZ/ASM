
#include <string.h>
#include <stdio.h>

int	main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = 'u';

	printf("str => %s\n", memchr(str, ch, 6));
	printf("str => %s\n", memchr("abcdefg", 'g', 10));
	printf("str => %s\n", memchr("abcdefghijklmno", 'g', 10));
	printf("str => %s\n", memchr("abcdefghijklomnopqur", 'd', 8));
	printf("str => %s\n", memchr("abcdefgaxz", 'a', 10));
	printf("str => %s\n", memchr("abcdefgaxz", '\n', 10));
	printf("str => %s\n", memchr("abcdefgaxz", ' ', 10));
	
	return (0);
}
