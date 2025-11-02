#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float  A1, A2, A3;
    double B1, B2, B3;
    int exp = 10;

    if (argc > 1) exp = atoi( argv[1] );

    A1 = powf(10, exp);
    A2 = 1.0/A1;
    A3 = 1.0-A2;
    printf("float:\n");
    printf("    1/%.e = %.30f\n", A1, A2);
    printf("                ^^^^^^^\n");
    printf("                1     7\n");
    printf("1 - 1/%.e = %.30f\n\n", A1, A3);

    B1 = pow(10, exp);
    B2 = 1.0/B1;
    B3 = 1.0-B2;
    printf("double:\n");
    printf("    1/%.e = %.30f\n", B1, B2);
    printf("                ^^^^^^^^^^^^^^^^\n");
    printf("                1              16\n");
    printf("1 - 1/%.e = %.30f\n\n", B1, B3);

    return 0;
}

