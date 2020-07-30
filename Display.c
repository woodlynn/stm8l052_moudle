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
void Display_coordinate (u8 longy,offset){// the position of x and y
	u8 x1,x2,y1,y2;
	y1= LCD_Y- offset;
	y2=	y1-longy;
	x1=0;
	x2=0;

	PutLinetoBuf(x1,y1,x2,y2);
	x1=0;
	x2=LCD_x;
	y1=LCD_Y-offset;
	y2=y1;

	PutLinetoBuf(x1,y1,x2,y2);

}

void Display_tempdot(temp,zerolevel){
	static u8 numberoftemp;
	u8 x,y;
	x=numberoftemp+1;
	y= temp/10+zerolevel;
	PutPointtoBuf(x,y);


}