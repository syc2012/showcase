#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int test = (argc > 1) ? atoi( argv[1] ) : 0;

	if (test == 1)
	printf("*%d\n", __LINE__);
	printf(" 1\n");

	if (test == 2)
	printf("*%d\n", __LINE__);
    printf(" 2\n");

	if (test == 3)
    printf("*%d\n", __LINE__);
	printf(" 3\n");

	if (test == 4)
    printf("*%d\n", __LINE__);
    printf(" 4\n");

#if 1
    if (test == 5) /* this ‘if’ clause does not guard... */
	printf("*%d\n", __LINE__);
	printf(" 5\n"); /* ...this statement, but the latter is misleadingly indent */
#else
    if (test == 5)
		printf("*%d\n", __LINE__);
	printf(" 5\n");
#endif

    if (test == 6)
	printf("*%d\n", __LINE__);
    printf(" 6\n");

    if (test == 7)
    printf("*%d\n", __LINE__);
	printf(" 7\n");

    if (test == 8)
    printf("*%d\n", __LINE__);
    printf(" 8\n");

    return 0;
}

