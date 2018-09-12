/*
** EPITECH PROJECT, 2018
** dsq
** File description:
** dqs
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define BFSIZE 0xF0000
#define STRING_1 "the cake is a lie !\0I'm hidden lol\r\n"

void test_ft_memmove_basic(void *ptr) {
	char *src = "this is a good nyancat !\r\n";
	char dst1[0xF0];
	char dst2[0xF0];
	int size = strlen(src);

	printf("valeur => %s\n", memmove(dst1, src, size));
	printf("valeur => %s\n", memmove(dst2, src, size));
	
}

void test_ft_memmove_return(void *ptr) {
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
        
	printf("valeur => %s\n", memmove(dst1, src, size));
	printf("valeur => %s\n", memmove("", "" - 1, 0));
}

void test_ft_memmove_null_byte(void *ptr) {
	char *src = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	int size = 33;
	char dst1[0xF0];
	char dst2[0xF0];

	printf("valeur => %s\n", memmove(dst1, src, size));
	printf("valeur => %s\n", memmove(dst2, src, size));
}

void test_ft_memmove_long_int(void *ptr) {
	unsigned long src = 0xdeadbeef;
	int size = sizeof(src);
	unsigned long dst1;
	unsigned long dst2;

	printf("valeur => %s\n", memmove(&dst1, &src, size));
	printf("valeur => %s\n", memmove(&dst2, &src, size));
}

void test_ft_memmove_overlap(void *ptr) {
	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int size = 0xF0 - 0xF;
	
	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	printf("valeur => %s\n", memmove(dst1 + 3, dst1, size));
	printf("valeur => %s\n", memmove(dst2 + 3, dst2, size));
}

void test_ft_memmove_overlap_rev(void *ptr) {
	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	printf("valeur => %s\n", memmove(dst1, dst1 + 3, size));
	printf("valeur => %s\n", memmove(dst2, dst2 + 3, size));
}

void test_ft_memmove_hard(void *ptr) {

	int size = 128 * 1024 * 1024;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);

	memset(data, 'A', size);
	
	printf("valeur => %s\n", memmove(dst, data, size));
}

void test_ft_memmove_null1(void *ptr) {
	char b[0xF0];

	printf("valeur => %s\n", memmove(NULL, b, 5));
}

void test_ft_memmove_null2(void *ptr) {
	char b[0xF0];

	printf("valeur => %s\n", memmove(b, NULL, 5));
}

void test_ft_memmove_same_pointer(void *ptr) {
	char data1[] = STRING_1;
	int size = strlen(STRING_1);

	printf("valeur => %s\n", memmove(data1, data1, size));
}

void test_ft_memmove_malloc(void *ptr) {
	char *src = STRING_1;
	char buff[0xF0];
	
	printf("valeur => %s\n", memmove(buff, src, 100));
}

void test_ft_memmove_speed(void *ptr) {
	int size = BFSIZE * 128;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);

	memset(data, 'A', size);
	printf("valeur => %s\n", memmove(dst, data, size));
}

void	simple_test()
{
        char dest[] = "0123456789";
	const char src[]  = "news";
	char	*str = malloc(10);

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 4);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	str = strdup("Salut c est moi");
        memmove(str + 2, str, 1);
        printf("1memmove = %s\n", str);

        str = strdup("Salut c est moi");
        memmove(str, str + 4, 8);
        printf("2memmove = %s\n", str);

        str = strdup("Salut c est moi");
        memmove(str + 1, str, 80);
        printf("3memmove = %s\n", str);

        str = strdup("Salut c est moi");
        memmove(str + 50, str, 80);
        printf("4memmove =  %s\n\n", str);



}

void            test_ft_memmove(void){
	simple_test();
//	test_ft_memmove_basic(NULL);
//	test_ft_memmove_return(NULL);
//	test_ft_memmove_null_byte(NULL);
//	test_ft_memmove_long_int(NULL);
	
//ERROR	test_ft_memmove_overlap(NULL);
	
//PRESQUE	test_ft_memmove_overlap_rev(NULL);
 
//	test_ft_memmove_same_pointer(NULL);
//	test_ft_memmove_hard(NULL);
//	test_ft_memmove_null1(NULL);
//	test_ft_memmove_null2(NULL);
//	test_ft_memmove_malloc(NULL);
//	test_ft_memmove_speed(NULL);
}

int	main()
{
	test_ft_memmove();
	return (0);
}
