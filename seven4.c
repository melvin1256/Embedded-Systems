#include <lpc214x.h>
void delay(unsigned int count);
int main() {
while(1){//set direction as output
IODIR0|=(0x01<<6);
	IODIR0|=(0x01<<5);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);
	IODIR0|=(0x01<<7);
	IODIR0|=(0x01<<8);
	IODIR0|=(0x01<<9);
	IODIR0|=(0x01<<16);
	IODIR0|=(0x01<<17);
	IODIR0|=(0x01<<18);
	IODIR0|=(0x01<<19);
	IODIR0|=(0x01<<20);
  IODIR0|=(0x01<<21);
	IODIR0|=(0x01<<22);
	//set direction as output
	//0
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 16);
	IOSET0 |= (1 << 17);
	IOSET0 |= (1 << 18);
	IOSET0 |= (1 << 19);
	IOSET0 |= (1 << 20);
	IOSET0 |= (1 << 21);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 17);
	IOSET0 |= (1 << 18);
  
	delay(400000);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 16);
	IOSET0 |= (1 << 17);
	IOSET0 |= (1 << 18);
	IOSET0 |= (1 << 19);
	IOSET0 |= (1 << 20);
	IOSET0 |= (1 << 21);
	delay(400000);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 17);
	IOSET0 |= (1 << 18);
	delay(400000);
	
}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 6);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	IOCLR0 |= (1 << 7);
	IOCLR0 |= (1 << 8);
	IOCLR0 |= (1 << 16);
	IOCLR0 |= (1 << 17);
	IOCLR0 |= (1 << 18);
	IOCLR0 |= (1 << 19);
	IOCLR0 |= (1 << 20);
	IOCLR0 |= (1 << 21);
}
