#include <stdio.h>

int main(int argc, char* argv[])
{

    unsigned char byte = 0;

    int engine_on = 1;
    int floor_pos = 7;
    int door_pos = 1;
    int brake1 = 1;
    int brake2 = 0;

    byte += engine_on << 7;
    byte += floor_pos << 4;
    byte += door_pos << 2;
    byte += brake1 << 1;
    byte += brake2;

    printf("%x", byte);

    return 0;
}