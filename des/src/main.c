#include "stdio.h"
#include <time.h>
char* getDateTime() ;
void  DES_Encrypt(unsigned char *m , unsigned char * k, unsigned char * e,int n,int * rn); //按ECB方式进行加密
void printf_hex( char* str , unsigned char* data,int len)
{
	int i;
	printf("%s",str);
	for(i = 0;i<len;i++)
		printf("%x",data[i]);
	printf("\n");
}
int
main(int argc, char *argv[])
{
	unsigned long i;
	unsigned char endata[8];
	int len;
	char *nowtime = getDateTime();
    printf("%s\n", nowtime); 

	for(i = 0;i<0xffffffff;i++)
	{
		DES_Encrypt("11111111","22222222",endata,8,&len);
		if(i%0xfff == 0)
	    {
	        getDateTime();
			printf("i = %lx\n",i);
			printf("%s\n", nowtime); 
		}
	}
    printf_hex("endata = ",endata,8);
}

char* getDateTime()  
{  
    static char nowtime[20];  
    time_t rawtime;  
    struct tm* ltime;  
    time(&rawtime);  
    ltime = localtime(&rawtime);  
    strftime(nowtime, 20, "%Y-%m-%d %H:%M:%S", ltime);  
    return nowtime;  
}  
