/*
** EPITECH PROJECT, 2018
** dqs
** File description:
** dqs
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define         STRING_1        "the cake is a lie !\0I'm hidden lol\r\n"
#define         STRING_4        "phrase differente pour le test"
#define         STRING_2        "there is no stars in the sky"
#define         STRING_3        "test basic !"

# define        BFSIZE  0xF0000


void			test_ft_strncmp_basic1(void *ptr) {
	char	*s1 = STRING_1;
	char	*s2 = STRING_2;
	size_t	size = strlen(STRING_1);

	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void			test_ft_strncmp_basic2(void *ptr) {
	char	*s1 = "omg1||||||||||||||||";
	char	*s2 = "omg3";
	size_t	size = 4;
	
	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void			test_ft_strncmp_basic3(void *ptr) {
	char	*s1 = "";
	char	*s2 = "";

	printf("valeur => %d\n", strncmp(s1, s2, 1));
}

void			test_ft_strncmp_basic4(void *ptr) {
	char	*s1 = "AAAAAAAAA1";
	char	*s2 = "AAAAAAAAA2";
			
	printf("valeur => %d\n", strncmp(s1, s2, 3));
}

void			test_ft_strncmp_zero1(void *ptr) {
	char	*s1 = "AAAAAA";
	char	*s2 = "";

	printf("valeur => %d\n", strncmp(s1, s2, 6));
}

void			test_ft_strncmp_zero2(void *ptr) {
	char	*s1 = "";
	char	*s2 = "AAAAAA";
	
	printf("valeur => %d\n", strncmp(s1, s2, 6));
}

void			test_ft_strncmp_cast(void *ptr) {
	char	*s1 = "\200";
	char	*s2 = "\0";

	printf("valeur => %d\n", strncmp(s1, s2, 1));
}

void			test_ft_strncmp_over_len(void *ptr) {
	char	*s1 = "omg1";
	char	*s2 = "omg3                ";
	size_t	size = 100000;
	
	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void			test_ft_strncmp_hidden(void *ptr) {
	char	*s1 = "atoms\0\0\0\0";
	char	*s2 = "atoms\0abc";
	size_t  size = 8;
	
	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void			test_ft_strncmp_ascii(void *ptr) {
	char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char	*s2 = "\x12\x02";
	size_t	size = 6;
        
	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void			test_ft_strncmp_null1(void *ptr) {
	printf("valeur => %d\n", strncmp(NULL, "nope", 3));
}

void			test_ft_strncmp_null2(void *ptr) {
	printf("valeur => %d\n", strncmp("nope", NULL, 3));
	printf("valeur => %d\n", strncmp(NULL, NULL, 3));
}

void			test_ft_strncmp_speed(void *ptr) {
	size_t	size = BFSIZE * 4;
	char	*s1 = malloc(size + 1);
	char	*s2 = malloc(size + 1);
	
	memset(s1, 'A', size);
	memset(s2, 'A', size);
	s1[size] = s2[size] = 0;
	printf("valeur => %d\n", strncmp(s1, s2, size));
}

void            test_ft_strncmp(void){
	test_ft_strncmp_basic1(NULL);
	test_ft_strncmp_basic2(NULL);
	test_ft_strncmp_basic3(NULL);
	test_ft_strncmp_basic4(NULL);
	test_ft_strncmp_zero1(NULL);
	test_ft_strncmp_zero2(NULL);
	test_ft_strncmp_cast(NULL);
	test_ft_strncmp_hidden(NULL);
	test_ft_strncmp_over_len(NULL);
	test_ft_strncmp_ascii(NULL);
//	test_ft_strncmp_null1(NULL);
//	test_ft_strncmp_null2(NULL);
	test_ft_strncmp_speed(NULL);
}

int	main()
{
	test_ft_strncmp();
	return (0);
}
