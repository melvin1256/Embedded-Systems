//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR1&=(~(0x01<<18));
IODIR0|=(0x01<<7);
IODIR0|=(0x01<<9);
if((0x01<<16)&IOPIN1){
IOCLR0|=(0x01<<7);
}
	else{
IOSET0|=(0x01<<7);
	}
	if((0x01<<18)&IOPIN1){
 IOCLR0|=(0x01<<9);
}
	else{
 IOSET0|=(0x01<<9);
	}
	}	
}