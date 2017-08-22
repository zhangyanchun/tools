#include "stdio.h"

int
main(int argc, char *argv[])
{
    int i = 0;
    if (argc != 2)
        printf("usage error\n");
    printf("%s\n",argv[1]); /* does it all */
    while(argv[1][i] != 0x00)
    {
        printf(",0x%c%c",argv[1][i],argv[1][i+1]);
        i+=2;
    } 
    printf("\nbuffer = %d\n",i/2); 
}