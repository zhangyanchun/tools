unsigned char xor_sum(unsigned char * buf, unsigned int len)
{

	unsigned int  i;
	unsigned char  sum;
	sum = 0;
	for(i=0;i<len;i++)
	{
	   sum = sum ^ buf[i];	
	}
	return sum;
}