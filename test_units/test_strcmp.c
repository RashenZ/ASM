/*
** EPITECH PROJECT, 2018
** dsq
** File description:
** dsq
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

# define	BFSIZE	0xF0000

void			test_ft_strcmp_basic1(void *ptr) {
	char	*s1 = STRING_1;
	char	*s2 = STRING_2;

	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_basic2(void *ptr) {
	char	*s1 = "omg1";
	char	*s2 = "omg3";
	
	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_basic3(void *ptr) {
	char	*s1 = "";
	char	*s2 = "";

	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_basic4(void *ptr) {
	char	*s1 = "AAAAAAAAAB";
	char	*s2 = "AAAAAAAAAC";

	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_after_0(void *ptr) {
	char	*s1 = "yolo!\0B";
	char	*s2 = "yolo!\0A";

	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_zero1(void *ptr) {
	char	*s1 = "AAAAAA";
	char	*s2 = "";
	
	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_zero2(void *ptr) {
	char	*s1 = "";
	char	*s2 = "AAAAAA";

	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_unsigned(void *ptr) {
	char	*s1 = "\0";
	char	*s2 = "\200";
        
	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_ascii(void *ptr) {
	char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char	*s2 = "\x12\x02";
	printf("valeur => %d\n", strcmp(s1, s2));
}

void			test_ft_strcmp_null1(void *ptr) {
	printf("valeur => %d\n", strcmp(NULL, "nope"));
}

void			test_ft_strcmp_null2(void *ptr) {
	printf("valeur => %d\n", strcmp("nope", NULL));
	printf("valeur => %d\n", strcmp(NULL, NULL));
}

void			test_ft_strcmp_speed(void *ptr) {
	size_t	size = BFSIZE * 4;
	char	*s1 = malloc(size + 1);
	char	*s2 = malloc(size + 1);
	
	memset(s1, 'A', size);
	memset(s2, 'A', size);
	s1[size] = s2[size] = 0;
	printf("valeur => %d\n", strcmp(s1, s2));
}

void            test_ft_strcmp(void){
	test_ft_strcmp_basic1(NULL);
	test_ft_strcmp_basic2(NULL);
	test_ft_strcmp_basic3(NULL);
	test_ft_strcmp_basic4(NULL);
	test_ft_strcmp_after_0(NULL);
	test_ft_strcmp_zero1(NULL);
	test_ft_strcmp_zero2(NULL);
	test_ft_strcmp_unsigned(NULL);
	test_ft_strcmp_ascii(NULL);
//	test_ft_strcmp_null1(NULL);
//	test_ft_strcmp_null2(NULL);
	test_ft_strcmp_speed(NULL);
}

int	main()
{
	test_ft_strcmp();
	return (0);
}
