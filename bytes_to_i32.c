#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned char bytes[4] = { 0x87, 0x11, 0x87, 0x11 };
    int i32;
    short i16;
    char i8;

    printf("1 byte to signed integer\n");
    #if 1
    i8 = bytes[0];
    i32 = i8;
    #else
    i32 = bytes[0];
    #endif
    printf("    0x%02x\n", bytes[0]);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    printf("2 bytes to signed integer\n");
    #if 1
    i16 = (bytes[0] << 8) | bytes[1];
    i32 = i16;
    #else
    i32 = (bytes[0] << 8) | bytes[1];
    #endif
    printf("    0x%02x%02x\n", bytes[0], bytes[1]);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    printf("4 bytes to signed integer\n");
    i32 = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];
    printf("    0x%02x%02x%02x%02x\n", bytes[0], bytes[1], bytes[2], bytes[3]);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    return 0;
}
