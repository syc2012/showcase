#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#if 0
# define ANGLE(imag, real) \
      (((imag != 0) || (real != 0)) ? atan2(imag, real) : 0)
#else
# define ANGLE(imag, real) \
      atan2(imag, real)
#endif

int main(int argc, char *argv[])
{
    double imag, real;

    imag = +0.0; real = +0.0;
    printf("atan2(%+.f, %+.f) = %+e\n", imag, real, ANGLE(imag, real));

    imag = +0.0; real = -0.0;
    printf("atan2(%+.f, %+.f) = %+e\n", imag, real, ANGLE(imag, real));

    imag = -0.0; real = +0.0;
    printf("atan2(%+.f, %+.f) = %+e\n", imag, real, ANGLE(imag, real));

    imag = -0.0; real = -0.0;
    printf("atan2(%+.f, %+.f) = %+e\n", imag, real, ANGLE(imag, real));

    return 0;
}

