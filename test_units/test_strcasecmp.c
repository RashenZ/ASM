#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = strdup("Hello");
	char *cmp = strdup("i");

	printf("%d\n", strcasecmp(str, cmp));

	free(cmp);
	cmp = strdup("");
	printf("%d\n", strcasecmp(str, cmp));
	printf("%d\n", strcasecmp(strdup("Hello"), strdup("")));
	printf("%d\n", strcasecmp(strdup(""), strdup("Hello")));
	printf("%d\n", strcasecmp(strdup(""), strdup("dl")));
	printf("%d\n", strcasecmp(strdup("hello"), strdup("HELLO")));
	printf("%d\n", strcasecmp(strdup("hel"), strdup("pol")));
	printf("%d\n", strcasecmp(strdup("Hel"), strdup("pol")));
	printf("%d\n", strcasecmp(strdup("hel"), strdup("Pol")));
	
/*	printf("1 %d\n", strcasecmp(str, cmp));
	printf("2 %d\n", strcasecmp(str, cmp));
	printf("3 %d\n", strcasecmp(cmp, str));
	printf("4 %d\n", strcasecmp(cmp, str));
	printf("5 strcase = %d\n", strcasecmp(strdup("TOOsdD"), strdup("tOOsda")));
	printf("6 strcase = %d\n", strcasecmp(strdup("AOOsdD"), strdup("BOOsda")));
        printf("7 strcase = %d\n", strcasecmp(strdup("BOOsdD"), strdup("AOOsda")));
        printf("8 strcase = %d\n", strcasecmp(strdup("0OOsdA"), strdup("0OOsdB")));
        printf("9 strcase = %d\n", strcasecmp(strdup("a"), strdup("A")));
	printf("10 strcase = %d\n", strcasecmp(strdup("z"), strdup("Z")));
        printf("11 strcase = %d\n", strcasecmp(strdup("efOOsdD"), strdup("tOOsda")));
        printf("12 strcase = %d\n", strcasecmp(strdup("TOOSDD"), strdup("toosdd")));
        printf("13 strcase = %d\n", strcasecmp(strdup("TOOsdD"), strdup("toosdM")));
	printf("14 strcase = %d\n\n", strcasecmp(strdup("TOOùsdD"), strdup("toosdM")));*/

	return (0);
}
