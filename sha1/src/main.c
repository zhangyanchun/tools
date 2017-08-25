#include "stdio.h"
#include "string.h"

void printf_hex( char* str , unsigned char* data,int len)
{
	int i;
	printf("%s",str);
	for(i = 0;i<len;i++)
	{
		if(data[i]>0xf)
			printf("%x",data[i]);
		else
			printf("0%x",data[i]);
	}
	printf("\n");
}
int
main(int argc, char *argv[])
{
	unsigned char endata[20];
	unsigned char indata_asc[2000]="02621226FF12220005340101B001A227A65083826912EB0C09BFA99FBFA940F02E1FC3E2F65A286423ACA54E92B5801C421D463919D2D5B2E6AD21499E428D89C78DC23C63403F37030576E3E4653BD3FEC6074F3F56EF24890408BCC2E618749FFA807009FFEEF939013E8DC8EACBC76DA4269B2C96C6055AD342401A03D0437E6A8025E8F125BE311D0208C60B5B1BEADB6E3531368A19DE4CCF4C774820E4AAE829BE05FBED74E4AC8E4612AD2765B5DB36327A4D7E9E7F1623751B4703";
	unsigned char indata[2000];
	int len;
	len = strlen(indata_asc);
	printf("len =%d\n",len );
	asc2hex(indata,indata_asc);
	printf_hex("indata = ",indata,len/2);
	sha1(indata,len/2,endata);
	printf_hex("endata = ",endata,20);
}
 