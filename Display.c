#include "Display.h"


void Display(void){

}
void Display_coordinate (u8 longy,u8 offset){// the position of x and y
	u8 x1,x2,y1,y2;
	y1= LCD_Y- offset;
	y2=	y1-longy;
	x1=0;
	x2=0;

	PutLinetoBuf(x1,y1,x2,y2);
	x1=0;
	x2=LCD_X;
	y1=LCD_Y-offset;
	y2=y1;

	PutLinetoBuf(x1,y1,x2,y2);

}

void Display_tempdot(u16 temp,u8 zerolevel){
	static u8 numberoftemp;
	u8 x,y;
	x=numberoftemp++;
	y= temp/10+zerolevel;
 
        PutPoint(x,y);
        if (numberoftemp>LCD_X)numberoftemp=0;
        

}