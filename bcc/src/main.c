#include "stdio.h"

unsigned char xor_sum(unsigned char * buf, unsigned int len);
int asc2hex(unsigned char *output,unsigned char *input);

int
main(int argc, char *argv[])
{
    unsigned char buffer[1000];
    int len = 0, sum;
    if (argc != 2)
        printf("usage error\n");
    printf("%s\n",argv[1]); 
    len = asc2hex(buffer,argv[1]);
    if(len){
	    sum = xor_sum(buffer,len);
	    printf("bcc = %x\n",sum);
    }
    else{
        printf("error\n");
    }
}