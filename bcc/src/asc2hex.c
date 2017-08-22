#define PRINT

#ifdef PRINT
#include "stdio.h"
#endif

int asc2hex(unsigned char *output,unsigned char *input)
{
    int i = 0 ,j = 0,trans_num;
    while(input[i] != 0x00)
    {
        if(input[i]>='0' && input[i] <= '9' ){
        	trans_num = '0';                         
        }
        else if(input[i]>='A' && input[i] <= 'F'){
        	trans_num = '7';
        }
        else if(input[i]>='a' && input[i] <= 'f'){
        	trans_num = 0x57;                
        }        
        else{
#ifdef PRINT
            if(input[i]!=0x00)
                printf("usage %c is not numbers\n",input[i]);
#endif
            return 0; 
        }
        if(i%2){
            output[j] += input[i] - trans_num;
            j++;
        }
        else{
           output[j] = (input[i] - trans_num) << 4;              
        }        
        i++;
    }	
    if(i%2){
#ifdef PRINT
        printf("number bits error");
#endif
        return 0;
    }
#ifdef PRINT
    else    
        printf("\nbuffer = %d\n",i/2);
#endif
    return j;
}