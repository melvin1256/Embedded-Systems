//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR0|=(0x01<<7);//set direction as output
if((0x01<<16)&IOPIN1){
IOCLR0|=(0x01<<7);
}
	else{
IOSET0|=(0x01<<7);
	}
	}	
}