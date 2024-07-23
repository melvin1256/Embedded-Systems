//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR0|=(0x01<<13);
if((0x01<<16)&IOPIN1){
IOSET0|=(0x01<<13);
}
else{
IOCLR0|=(0x01<<13);
	}
	}	
}