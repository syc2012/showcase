#include <stdio.h>
#include <inttypes.h>


#define PACKED 0

typedef struct _tAlign2
{
    unsigned char  A;
    unsigned short B;
    unsigned char  C;
#if (PACKED)
} __attribute__((packed)) tAlign2;
#else
} tAlign2;
#endif

typedef struct _tAlign4
{
    unsigned char  A;
    unsigned int   B;
    unsigned char  C;
#if (PACKED)
} __attribute__((packed)) tAlign4;
#else
} tAlign4;
#endif

typedef struct _tAlign8
{
    unsigned char  A;
    double         B;
    unsigned char  C;
#if (PACKED)
} __attribute__((packed)) tAlign8;
#else
} tAlign8;
#endif

unsigned char g_begin = 0xff;
tAlign2 g_align2 = {
    .A = 0xaa,
    .B = 16888,
    .C = 0xcc
};
tAlign4 g_align4 = {
    .A = 0xaa,
    .B = 20250821,
    .C = 0xcc
};
tAlign8 g_align8 = {
    .A = 0xaa,
    .B = 123.456789,
    .C = 0xcc
};
unsigned char g_end = 0xff;

int main(void)
{
    printf("\n");
    printf("&(g_begin)    = %p\n", &(g_begin));
    printf("&(g_align2)   = %p (%lu bytes)\n", &(g_align2), sizeof(tAlign2));
    printf("&(g_align2.A) = %p\n", &(g_align2.A));
    printf("&(g_align2.B) = %p\n", &(g_align2.B));
    printf("&(g_align2.C) = %p\n", &(g_align2.C));
    printf("&(g_align4)   = %p (%lu bytes)\n", &(g_align4), sizeof(tAlign4));
    printf("&(g_align4.A) = %p\n", &(g_align4.A));
    printf("&(g_align4.B) = %p\n", &(g_align4.B));
    printf("&(g_align4.C) = %p\n", &(g_align4.C));
    printf("&(g_align8)   = %p (%lu bytes)\n", &(g_align8), sizeof(tAlign8));
    printf("&(g_align8.A) = %p\n", &(g_align8.A));
    printf("&(g_align8.B) = %p\n", &(g_align8.B));
    printf("&(g_align8.C) = %p\n", &(g_align8.C));
    printf("&(g_end)      = %p\n", &(g_end));
    printf("\n");

    return 0;
}
