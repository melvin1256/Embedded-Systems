//LED
#include<lpc214x.h>
void delay(unsigned int count);
int main()
{

	IODIR0 |= (0x01<<2);
	IODIR0 |= (0x01<<4);
	IODIR0 |= (0x01<<6);
	while(1)
	{
		IOCLR0 |= (1<<4);
		IOSET0 |= (1 << 2);
		delay(500000);
		IOCLR0 |= (1 << 2);
		
		IOSET0 |= (1<<4);
		delay(500000);
		IOCLR0 |= (1<<4);
		
		IOSET0 |= (1<<6);
		delay(500000);
		
		IOCLR0 |= (1<<6);
		IOSET0 |= (1<<4);
		delay(500000);
		
	}
}
void delay(unsigned int count) 
{
unsigned int i;
for(i=0;i<count;i++);
}