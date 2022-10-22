#include <stdio.h>
#include <stdlib.h>



int main()
{

	char s1[] = "dina", s2[100], i;

	printf("s1 : %s\n", s1);

	// Execute loop till null found
	for (i = 0; s1[i] != '\0'; ++i) {
		// copying the characters by
		// character to str2 from str1
		s2[i] = s1[i];
	}

//	s2[i] = '\0';

	// printing the destination string
	printf("String s2 : %s", s2);

	return 0;
}
