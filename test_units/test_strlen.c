/*
** EPITECH PROJECT, 2018
** dsq
** File description:
** dqs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

# define BFSIZE 0xF0000

void test_ft_strlen_basic(void *ptr) {
	int r1;
	int r2;
	char *str = "sais-tu compter ?";

	printf("valeur => %d\n", strlen(str));
}

void test_ft_strlen_random(void *ptr) {
	int r1;
	int r2;
	char buff[0x100];
	int offset;
	int rnd_fd = open("/dev/urandom", O_RDONLY);
	const int test_count = 9001;

	for (int i = 0; i < test_count; i++) {
		offset = rand() % sizeof(buff);
		buff[sizeof(buff) - 1] = 0;
		printf("valeur => %d\n", strlen(buff + offset));
	}
}

void test_ft_strlen_bad_opti(void *ptr) {
	int r1;
	int r2;
	const char *str = "01234567, AAAAAA, abc\xba e, ......, end of string !";
	
	printf("valeur => %d\n", strlen(str));
}

void test_ft_strlen_unicode(void *ptr) {
	int r1;
	int r2;
	char *str = "♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪";

	printf("valeur => %d\n", strlen(str));
}

void test_ft_strlen_empty(void *ptr) {
	printf("valeur => %d\n", strlen(""));

}

void test_ft_strlen_null(void *ptr) {
	printf("valeur => %d\n", strlen(NULL));
}

void test_ft_strlen_zero(void *ptr) {
	int r1;
	int r2;
	const char *s = "HAHAHAHA \0 TA FAIL XD";

	printf("valeur => %d\n", strlen(s));
}

void test_ft_strlen_little(void *ptr) {
	int r1;
	int r2;
	const char *s = "YOLO";

	if ((unsigned long)s & 0b111)
		s++;
	
	printf("valeur => %d\n", strlen(s));

}

void test_ft_strlen_speed(void *ptr) {
	size_t size = BFSIZE * 16;
	char *str = malloc(size + 1);

	memset(str, 'A', size);
	str[size] = 0;
	
	printf("valeur => %d\n", strlen(str));
}

void            test_ft_strlen(void){

//	test_ft_strlen_basic(NULL);
//	test_ft_strlen_random(NULL);
//	test_ft_strlen_bad_opti(NULL);
//	test_ft_strlen_unicode(NULL);
//	test_ft_strlen_null(NULL);
//	test_ft_strlen_empty(NULL);
	test_ft_strlen_zero(NULL);
	test_ft_strlen_little(NULL);
	test_ft_strlen_speed(NULL);
}


int	main()
{
	test_ft_strlen();
	return (0);
}
