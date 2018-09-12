/*
** EPITECH PROJECT, 2018
** ds
** File description:
** dsq
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define         STRING_1        "the cake is a lie !\0I'm hidden lol\r\n"
#define         STRING_4        "phrase differente pour le test"
#define         STRING_2        "there is no stars in the sky"
#define         STRING_3        "test basic !"

# define        BFSIZE  0xF0000


void			test_ft_strrchr_basic(void *ptr) {
	char	*src = STRING_1;

	printf("valeur => %s\n", strrchr(src, ' '));
}

void			test_ft_strrchr_not_found(void *ptr) {
	char	*src = STRING_1;

	printf("valeur => %s\n", strrchr(src, ' '));
}

void			test_ft_strrchr_unicode(void *ptr) {
	char	*src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";

	printf("valeur => %s\n", strrchr(src, L'–'));
}

void			test_ft_strrchr_zero(void *ptr) {
	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	
	printf("valeur => %s\n", strrchr(src, '\0'));
}

void			test_ft_strrchr_empty(void *ptr) {
	char	*src = "\0";

	printf("valeur => %s\n", strrchr(src, 'a'));
}

void			test_ft_strrchr_null(void *ptr) {
	printf("valeur => %s\n", strrchr(NULL, '\0'));
}

void			test_ft_strrchr_speed(void *ptr) {
	size_t	size = BFSIZE * 16;
	char	*src = malloc(size + 1);
	
	memset(src, 'A', size);
	src[size] = 0;
	printf("valeur => %s\n", strrchr(src, 'B'));
}

void            test_ft_strrchr(void) {
	test_ft_strrchr_basic(NULL);
	test_ft_strrchr_not_found(NULL);
	test_ft_strrchr_unicode(NULL);
	test_ft_strrchr_zero(NULL);
	test_ft_strrchr_empty(NULL);
//	test_ft_strrchr_null(NULL);
	test_ft_strrchr_speed(NULL);
}

int	main()
{
	test_ft_strrchr();
	return (0);
}
