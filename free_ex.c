
#include <stdlib.h>
#include <stdio.h>

int	main()
{
		char	**s1;
	
	s1 = NULL;

	printf(" one : %p\n", s1);
	printf(" one bis : %p\n", &s1);

	s1 = (char **)malloc((4) * sizeof(char *));
	s1[0] = malloc(5 * sizeof(char ));
	s1[0] = "math";
	s1[1] = malloc(5 * sizeof(char ));
	s1[1] = "math";

	printf("s10 : %s\n", s1[0]);
	printf("s11 : %p\n", s1[1]);
	printf(" two : %p\n", s1);
	printf("two bis : %p\n", &s1);
	//free(s1++);
	//free(&s1[1]);
	free(s1);
	printf("s10 : %s\n", s1[0]);
	printf("s11 : %p\n", s1[1]);
	printf("three : %p\n", s1);
	printf("three bis : %p\n", &s1);

	s1[0] = "mathieu";
	s1[1] = "mathieu";
	s1[2] = "mathieu";
	s1[3] = "mathieu";

	return 0;
}