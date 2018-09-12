/*
** EPITECH PROJECT, 2018
** dsq
** File description:
** dqs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define BSIZE 0xF00
# define BFSIZE 0xF0000

void test_ft_memset_basic(void *ptr) {

	const int size = 20;
	char b2[BSIZE];

	printf("valeur => %s\n", memset(b2, 'B', BSIZE));
        
	printf("valeur => %s\n", memset(b2, 'A', size));
        
}

void test_ft_memset_unsigned(void *ptr) {

	const int size = 22;
	char b2[BSIZE];

	printf("valeur => %s\n", memset(b2, 'B', BSIZE));

	printf("valeur => %s\n", memset(b2, '\200', size));
}

void test_ft_memset_return(void *ptr) {
	const int size = 18;
	char b1[BSIZE];

	printf("valeur => %s\n", memset(b1, 'B', BSIZE));
	printf("valeur => %s\n", memset(b1, 'A', size));
	printf("valeur => %s\n", memset("", 'A', 0));
}

void test_ft_memset_fat(void *ptr) {
	char *b1 = (char*)malloc(sizeof(char) * (BFSIZE + 1));

	*b1 = 0;
	printf("valeur => %s\n", memset(b1, '\5', BFSIZE));
}

void test_ft_memset_null(void *ptr) {
	printf("valeur => %s\n", memset(NULL, 'a', 12));
}

void test_ft_memset_zero_value(void *ptr) {
	char buff[BSIZE];
	char buff2[BSIZE];
	
	printf("valeur => %s\n", memset(buff, 0, sizeof(buff)));
	printf("valeur => %s\n", memset(buff2, 0, sizeof(buff2)));

	printf("valeur => %s\n", memset(buff, '\xff', 0));
	printf("valeur => %s\n", memset(buff2, '\xff', 0));
}

void test_ft_memset_speed(void *ptr) {
	size_t size = 100 * 16;
	char *b1 = (char *)malloc(sizeof(char) * size);
	char *b2 = (char *)malloc(sizeof(char) * size);
	printf("valeur => %s\n", memset(b1, 'A', size));
}

void	simple_test()
{
	char str[50];

	strcpy(str,"Toto");
	puts(str);

	memset(str,'$', 1);
	puts(str);

	return(0);
}

void            test_ft_memset(void) {
	simple_test();
	test_ft_memset_basic(NULL);
	test_ft_memset_return(NULL);
	test_ft_memset_unsigned(NULL);
//	test_ft_memset_null(NULL);
	test_ft_memset_zero_value(NULL);
	test_ft_memset_fat(NULL);
	test_ft_memset_speed(NULL);
}

int	main()
{
	test_ft_memset();
	return (0);
}
