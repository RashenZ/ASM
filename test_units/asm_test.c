/*
** EPITECH PROJECT, 2018
**
** File description:
**
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char *s)
{
	int i;
	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}

int main(int ac, char **av)
{
	printf("strlen = %d\n", strlen(av[0]));
	printf("strlen = %d\n", strlen(strdup("Salut")));
	printf("strlen = %d\n", strlen(strdup("Salut ca vas ")));
	printf("strlen = %d\n\n", strlen(strdup("Salut ca vas moi plus tot bune")),
	my_strlen(strdup("Salut ca vas moi plus tot bune")));

	printf("strcmp = %d\n", strcmp(strdup("a"), strdup("z")));
	printf("strcmp = %d\n", strcmp(strdup("b"), strdup("a")));
	printf("strcmp = %d\n", strcmp(strdup("bobo"), strdup("bobo")));
	printf("strcmp = %d\n", strcmp(strdup("tottoototo"), strdup("tottoototo")));
	printf("strcmp = %d\n", strcmp(strdup(""), strdup("")));
	printf("strcmp = %d\n", strcmp(strdup("Sa"), strdup("Sb")));
	printf("strcmp = %d\n", strcmp(strdup("Sa"), strdup("Sz")));
	printf("strcmp = %d\n", strcmp(strdup("Saqfsdfg"), strdup("Sjjs")));
	printf("strcmp = %d\n\n", strcmp(strdup("Sa"), strdup("Shissdfs")));
	char *str = malloc(sizeof(char) * 10);
	char *cpy = malloc(sizeof(char) * 10);

	memset(str, 'a', 8);
	printf("memset = %s\n", str);
	memcpy(cpy, str, 5);
	printf("memcpy = %s\n", cpy);
	memset(str, 'x', 5);
	printf("memset = %s\n", str);
	memcpy(cpy, str, 7);
	printf("memcpy = %s\n", cpy);

	str = strdup("Salut c est moi");
	memmove(str + 2, str, 10);
	printf("memmove = %s\n", str);

	str = strdup("Salut c est moi");
	memmove(str, str + 4, 8);
	printf("memmove = %s\n", str);

	str = strdup("Salut c est moi");
	memmove(str + 1, str, 80);
	printf("memmove = %s\n", str);

	str = strdup("Salut c est moi");
	memmove(str + 50, str, 80);
	printf("memmove =  %s\n\n", str);

	printf("strncmp = %d\n", strncmp(strdup("TOOsdd"), strdup("sOOsaa"), 4));
	printf("strncmp = %d\n", strncmp(strdup("TOOsdd"), strdup("TOOsaa"), 0));
	printf("strncmp = %d\n", strncmp(strdup("TOOsdd"), strdup("TOOsaa"), 5));
	printf("strncmp = %d\n", strncmp(strdup("TOsdd"), strdup("TOOsaa"), 40));
	printf("strncmp = %d\n\n", strncmp(strdup("zTOOsdd"), strdup("TOOsaa"), -1));

	printf("strcase = %d\n", strcasecmp(strdup("TOOsdD"), strdup("tOOsda")));
	printf("strcase = %d\n", strcasecmp(strdup("AOOsdD"), strdup("BOOsda")));
	printf("strcase = %d\n", strcasecmp(strdup("BOOsdD"), strdup("AOOsda")));
	printf("strcase = %d\n", strcasecmp(strdup("0OOsdA"), strdup("0OOsdB")));
	printf("strcase = %d\n", strcasecmp(strdup("a"), strdup("A")));
	printf("strcase = %d\n", strcasecmp(strdup("z"), strdup("Z")));
	printf("strcase = %d\n", strcasecmp(strdup("efOOsdD"), strdup("tOOsda")));
	printf("strcase = %d\n", strcasecmp(strdup("TOOSDD"), strdup("toosdd")));
	printf("strcase = %d\n", strcasecmp(strdup("TOOsdD"), strdup("toosdM")));
	printf("strcase = %d\n\n", strcasecmp(strdup("TOOùsdD"), strdup("toosdM")));

	printf("strstr = %s\n", strstr(strdup("toooootot"), strdup("ot")));
	printf("strstr = %s\n", strstr(strdup("ot"), strdup("ot")));
	printf("strstr = %s\n", strstr(strdup("ot"), strdup("ott")));
	printf("strstr = %s\n", strstr(strdup("ooooootootott"), strdup("ott")));
	printf("strstr = %s\n", strstr(strdup("ottt"), strdup("ott")));
	printf("strstr = %s\n", strstr(strdup("b"), strdup("a")));
	printf("strstr = %s\n\n", strstr(strdup("ab"), strdup("b")));

	printf("strpbrk = %s\n", strpbrk(strdup("ab"), strdup("b")));
	printf("strpbrk = %s\n", strpbrk(strdup("aaaaa"), strdup("b")));
	printf("strpbrk = %s\n", strpbrk(strdup("aaaaab"), strdup("b")));
	printf("strpbrk = %s\n", strpbrk(strdup("aabbaa"), strdup("b")));
	printf("strpbrk = %s\n\n", strpbrk(strdup("aaaabaa"), strdup("aaab")));

	printf("strcspn = %d\n", strcspn(strdup("aas"), strdup("bbs")));
	printf("strcspn = %d\n", strcspn(strdup("aa"), strdup("a")));
	printf("strcspn = %d\n", strcspn(strdup("b"), strdup("ab")));
	printf("strcspn = %d\n", strcspn(strdup("aad"), strdup("z")));
	printf("strcspn = %d\n", strcspn(strdup("aad"), strdup("")));
	printf("strcspn = %d\n", strcspn(strdup("baadd"), strdup("a")));
	printf("strcspn = %d\n", strcspn(strdup("gaggggggggs"), strdup("a")));
	printf("strcspn = %d\n", strcspn(strdup("assa"), strdup("a")));
	printf("strcspn = %d\n\n", strcspn(strdup("gagggggggbs"), strdup("b")));

	char *tt = strdup("aas");
	printf("rindex = %s\n", rindex(tt, 'a'));
	//printf("%s\n", tt);
	printf("rindex = %s\n", rindex(strdup("aa"), 'b'));
	printf("rindex = %s\n", rindex(strdup("b"), 'c'));
	printf("rindex = %s\n", rindex(strdup("aad"), 'd'));
	printf("rindex = %s\n", rindex(strdup("aad"), 'g'));
	printf("rindex = %s\n", rindex(strdup("baadd"), 'a'));
	printf("rindex = %s\n", rindex(strdup("gaggggggggs"), 's'));
	printf("rindex = %s\n", rindex(strdup("assa"), 'a'));
	printf("rindex = %s\n", rindex(strdup("gagggggggbs"), 'b'));
	return (0);
}
