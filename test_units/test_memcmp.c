#include <stdio.h>
#include <string.h>

int	main()
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	printf("valeur => %d\n", memcmp(str1, str2, 5));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "abdcefhijk", 20));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "", 20));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "abdcefhijk", 1));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "abcdjk", 2));
	printf("valeur => %d\n", memcmp("abcdefghijkl", " ", 0));
	printf("valeur => %d\n", memcmp("abcdefghijkl", " abcd", 20));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "l", 12));
	printf("valeur => %d\n", memcmp("abcdefghijkl", "abdcefhijk", 20));
	printf("valeur => %d\n", memcmp("abcdefgh", "abdcefhijk", 20));
	

	return (0);
}
