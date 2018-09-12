#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define BFSIZE 0xF0000

void test_ft_strstr_basic(void *ptr) {
	char *s1 = "FF";
	char *s2 = "see FF your FF return FF now FF";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_basic2(void *ptr) {
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_basic3(void *ptr) {
	char *s2 = "FF";
	char *s1 = "see F your F return FF now FF";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_basic4(void *ptr) {
	char *s1 = "FF";
	char *s2 = "see F your F return F now FF";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_basic5(void *ptr) {
	char *s1 = "aaabbbaaabbb";
	char *s2 = "abbaaab";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_unicode(void *ptr) {
	char *s1 = "こんにちは";
	char *s2 = "にち";
	
	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_zero_len(void *ptr) {
	char *s1 = "";
	char *s2 = "";
	
	printf("valeur => %s\n", strstr(s1, s2));

}

void test_ft_strstr_not_found(void *ptr) {
        char *s1 = "can't found that";
	char *s2 = "in this !";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_zero_len1(void *ptr) {
	char *s1 = "";
	char *s2 = "oh no not the empty string !";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_zero_len2(void *ptr) {
	char *s1 = "oh no not the empty string !";
	char *s2 = "";

	printf("valeur => %s\n", strstr(s1, s2));
}

void test_ft_strstr_same_ptr(void *ptr) {
	char *s1 = "AAAAAAAAAAAAA";
	
	printf("valeur => %s\n", strstr(s1, s1));
}

void test_ft_strstr_null1(void *ptr) {
	printf("valeur => %s\n", strstr(NULL, "fake"));
}

void test_ft_strstr_null2(void *ptr) {
	printf("valeur => %s\n", strstr("fake", NULL));
}

void test_ft_strstr_speed(void *ptr) {
	size_t size = BFSIZE * 4;
	char *s1 = malloc(size + 1);
	char *s2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";

	memset(s1, 'A', size);
	s1[size] = 0;
	printf("valeur => %s\n", strstr(s1, s2));
}

void            test_ft_strstr(void){
//	test_ft_strstr_basic(NULL);
	test_ft_strstr_basic2(NULL);
//	test_ft_strstr_basic3(NULL);
//	test_ft_strstr_basic4(NULL);
//	test_ft_strstr_basic5(NULL);
//	test_ft_strstr_unicode(NULL);
//	test_ft_strstr_zero_len(NULL);
//	test_ft_strstr_not_found(NULL);
//	test_ft_strstr_zero_len1(NULL);
//	test_ft_strstr_zero_len2(NULL);
//	test_ft_strstr_same_ptr(NULL);
//	test_ft_strstr_null2(NULL);
//	test_ft_strstr_null1(NULL);
//	test_ft_strstr_speed(NULL);
}

int	main()
{
	test_ft_strstr();
	return (0);
}
