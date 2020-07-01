#include "Display.h"
void numtochar(unsigned char *strin,*strout,lengh){
	unsigned char tmp1[lengh],tmp2[leng*2]
	tmp1=strin;
	for (unsigned char i=0;i<lengh;i++){
		tmp2[i]=tmp1[i]&0xf0>>4;
		tmp2+='0';
		tmp2[i+1]=tmp1[i]&0x0f;
		tmp2+-'0';
	}

}
void Display(void){

}