#include<lpc214x.h>
void delay(unsigned int count);
int main()
{

IODIR0 |= (1<<4);

while(1)
{
	IOSET0 |= (1 << 4);
	delay(5000);

	IOCLR0 |= (1 << 4);
	delay(5000);
}
	return 0;
}
void delay(unsigned int count) 
{
unsigned int i;
for(i=0;i<count;i++);
}
