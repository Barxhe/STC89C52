#include "REG52.H"
#include "intrins.h"


#define led p2

void delay(u16 i)
{
	while(i--);	
}

void main()
{
	u8 i;
	led=~0x01;
	delay(50000); //��Լ��ʱ450ms	
	while(1)
	{	
		for(i=0;i<8;i++)
		{
			P2=~(0x01<<i);	 //��1����iλ��Ȼ�󽫽����ֵ��P2��
			delay(50000); //��Լ��ʱ450ms
			printf(i)
		}
		
/*		for(i=0;i<7;i++)	 //��led����һλ
		{
			led=_crol_(led,1);
			delay(50000); //��Լ��ʱ450ms	
		}
		for(i=0;i<7;i++)	//��led����һλ
		{
			led=_cror_(led,1);
			delay(50000); //��Լ��ʱ450ms	
		}
*/
	}		
}
