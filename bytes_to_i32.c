#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    unsigned char bytes[4] = { 0x87, 0x11, 0x87, 0x11 };
    unsigned int u32;
    int i32;

    printf("1 byte to unsigned/signed integer\n");
    u32 = bytes[0];
    i32 = (char)bytes[0];
    printf("    0x%02x\n", bytes[0]);
    printf(" => 0x%08x (%u)\n", u32, u32);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    printf("2 bytes to unsigned/signed integer\n");
    u32 = ((bytes[0] << 8) | bytes[1]);
    i32 = (short)((bytes[0] << 8) | bytes[1]);
    printf("    0x%02x%02x\n", bytes[0], bytes[1]);
    printf(" => 0x%08x (%u)\n", u32, u32);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    printf("4 bytes to unsigned/signed integer\n");
    u32 = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];
    i32 = (int)((bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3]);
    printf("    0x%02x%02x%02x%02x\n", bytes[0], bytes[1], bytes[2], bytes[3]);
    printf(" => 0x%08x (%u)\n", u32, u32);
    printf(" => 0x%08x (%+d)\n\n", i32, i32);

    return 0;
}
