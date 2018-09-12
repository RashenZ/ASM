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

void test_ft_strchr_basic(void *ptr) {
	
	char *src = STRING_1;

	printf("valeur => %s\n", strchr(src, ' '));

}

void test_ft_strchr_first(void *ptr) {
	char *src = STRING_1;

	printf("valeur => %s\n", strchr(src, 't'));
}

void test_ft_strchr_before_0(void *ptr) {
	char *src = STRING_1;
	printf("valeur => %s\n", strchr(src, '!'));
}

void test_ft_strchr_not_found(void *ptr) {
	char *src = STRING_1;
	
	printf("valeur => %s\n", strchr(src, 'x'));
}

void test_ft_strchr_unicode(void *ptr) {
	char *src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";

	printf("valeur => %s\n", strchr(src, L'–'));
}

void test_ft_strchr_after_0(void *ptr) {
	char *src = "AA\0B";

	printf("valeur => %s\n", strchr(src, 'B'));
}

void test_ft_strchr_zero(void *ptr) {
	char*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

	printf("valeur => %s\n", strchr(src, '\0'));
}

void test_ft_strchr_empty(void *ptr) {
	char *src = "\0";
        
	printf("valeur => %s\n", strchr(src, 'a'));
}

void test_ft_strchr_null(void *ptr) {
	
	printf("valeur => %s\n", strchr(NULL, '\0'));
}

void test_ft_strchr_speed(void *ptr) {
	size_t size = BFSIZE * 16;
	char *src = malloc(size + 1);

	memset(src, 'A', size);
	src[size] = 0;
	printf("valeur => %s\n", strchr(src, 'B'));
}

void            test_ft_strchr(void){
//	test_ft_strchr_basic(NULL);
//	test_ft_strchr_first(NULL);
//	test_ft_strchr_before_0(NULL);
//	test_ft_strchr_not_found(NULL);
//	test_ft_strchr_unicode(NULL);
//	test_ft_strchr_after_0(NULL);
//	test_ft_strchr_zero(NULL);
//	test_ft_strchr_empty(NULL);
	test_ft_strchr_null(NULL);
//	test_ft_strchr_speed(NULL);
}

int	main()
{
	test_ft_strchr();
	return (0);
}
