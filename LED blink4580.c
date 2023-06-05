#include <stdio.h>
#include <P18F4580.h>
void ToDelay(void);
#define mybit PORTBbits.RB4
void main(void)
{
	TRISBbits.TRISB4 =0;
	while(1)
	{
		mybit = 1;
		ToDelay();
		mybit = 0;
		ToDelay();
	}
}
void ToDelay(void)
{
	T0CON = 0x01;
	TMR0H = 0xFF;
	TMR0L = 0x00;
	T0CONbits.TMR0ON = 1;
	while(INTCONbits.TMR0IF == 0);
	T0CONbits.TMR0ON = 0;
	INTCONbits.TMR0IF = 0;
}