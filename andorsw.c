#include<reg51.h>
sbit sw1=P3^0;
sbit sw2=P3^1;
sbit sw3=P3^2;
sbit sw4=P3^3;
sbit led=P3^4;
void main()
{
	P3=0X00;
if((sw1==1)&&(sw2==1))
{
led=1;
}

if((sw3==1)||(sw4==1))
{
led=1;
}

}