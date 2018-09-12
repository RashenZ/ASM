#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <stdlib.h>


#define STRING_1 "the cake is a lie !\0I'm hidden lol\r\n"
#define STRING_4 "phrase differente pour le test"
#define STRING_2 "there is no stars in the sky"
#define STRING_3 "test basic !"


void test_ft_memcpy_return(void *ptr) {
	char src[] = "test basic du memcpy !";
	char buff1[22];
	
	printf("1valeur => %s\n", memcpy(buff1, src, 22));
	
	printf("2valeur => %s\n", memcpy("", src, 0));

}

void test_ft_memcpy_zero_value(void *ptr) {
	char buff[] = "test 0 du memcpy !";
	char *src = STRING_4;
	char buff2[] = STRING_4;
	
	printf("3valeur => %s\n", memcpy(buff2, buff, 0));

}

void test_ft_memcpy_basic_test2(void *ptr) {
	char src[] = STRING_3;
	char buff1[] = STRING_1;
	char buff2[] = STRING_1;
	
	printf("4valeur => %s\n", memcpy(buff1, src, strlen(src)));
	printf("5valeur => %s\n", memcpy(buff2, src, strlen(src)));

}

void test_ft_memcpy_to_small(void *ptr) {
	printf("6valeur => %s\n", memcpy("", "segfaulter tu dois", 17));
}


void test_ft_memcpy_null1(void *ptr) {
	printf("7valeur => %s\n", memcpy(NULL, "segfaulter tu dois", 17));
}

void test_ft_memcpy_null2(void *ptr) {
	printf("8valeur => %s\n", memcpy("            ", NULL, 17));
	
}

void test_ft_memcpy_speed(void *ptr) {
	size_t size = 100 * 16;
	char *src = malloc(size + 1);
	char *buff1 = malloc(size + 1);

	memset(src, 'A', size);
	printf("9valeur => %s\n", memcpy(buff1, src, size));
}

void	simple_test()
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50] = "coucou";

	printf("first value => %s\n", memcpy(dest, src, 5));
}

void            test_ft_memcpy(void){
	test_ft_memcpy_return(NULL);
	test_ft_memcpy_zero_value(NULL);
	simple_test();
	test_ft_memcpy_basic_test2(NULL);
//	test_ft_memcpy_to_small(NULL);
//	test_ft_memcpy_null1(NULL);
//	test_ft_memcpy_null2(NULL);
	test_ft_memcpy_speed(NULL);
}

int	main()
{
	test_ft_memcpy();
	return (0);
}

