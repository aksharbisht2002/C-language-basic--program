#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" int is %2d bytes \n", sizeof(int));
    printf(" float is %2d bytes \n", sizeof(float));
    printf(" char is %2d bytes \n", sizeof(char));
    printf("\n");
    printf(" double is %2d bytes \n", sizeof(double));
    printf(" long int is %2d bytes \n", sizeof(long int));
    printf(" long double is %2d bytes \n", sizeof(long double));
    printf("\n");
    printf(" signed int is %2d bytes \n", sizeof(signed int));
    printf(" signed char is %2d bytes \n", sizeof(signed char));
    printf("unsigned char is %2d bytes \n", sizeof(unsigned char));
    return 0;
}
