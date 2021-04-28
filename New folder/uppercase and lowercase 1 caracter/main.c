#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upperCHAR , lowerCHAR;
    int ASCII;
    printf("ENTER AN UPPERCASE CHARACTER ---- ");
    scanf("%c" , &upperCHAR);
    ASCII = upperCHAR;
    lowerCHAR = ASCII + 32;
    printf("\n ITS LOWERCASE CHARACTER --- %c" ,lowerCHAR);
    return 0;
}
