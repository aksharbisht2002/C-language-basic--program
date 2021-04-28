#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number , temp , value ;
    printf(" ENTER THE NUMBER \n");
    scanf("%i", &number);
    temp = number;
    value = temp  % 10;
    printf(" THE DIGIT  AT ONES PLACES --- %i\n" , value );
    return 0;
}
